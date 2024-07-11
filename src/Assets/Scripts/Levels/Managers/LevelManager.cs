/**
* Universidad de La Laguna
* Proyecto: Roblockly
* Autor: Edwin Plasencia Hernández
* Email: alu0101329888@ull.edu.es
* Fecha: 13/05/2024
* Descripción: LevelManager: Manager genérico de niveles, maneja las cámaras, los botones del canvas
*                            relacionados con el nivel, spawns y banderas
*/

using System.Collections.Generic;
using System;
using UBlockly.UGUI;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Newtonsoft.Json.Linq;
using Newtonsoft.Json;
using System.Globalization;
using System.Linq;
using System.Text.RegularExpressions;

public class LevelManager : MonoBehaviour {
    public List<Material> skyboxes;
    public List<GameObject> prefabs;
    public Grid buildGrid;
    public GameObject spawnpointsFolder;
    public GameObject flagFolder;

    public event Action OnReset; // Evento para avisar a todos los interactuables de la escena de que se reinicia el nivel

    private List<Vector3> movableObjectsSpawnPositions = new List<Vector3>();       // Posición inicial a reiniciar de dichos objetos
    private List<Quaternion> movableObjectsSpawnRotations = new List<Quaternion>(); // Rotación inicial a reiniciar de dichos objetos

    public GameObject errorPanel;           // Panel de errores
    public Text errorTitle;                 // Título del panel de errores

    public List<GameObject> victoryPanels;  // Paneles de victoria de cada canvas a activar al lograr una victoria
    public List<Text> challengeTitles;      // Títulos en los paneles de victoria a reemplazar con el nombre del desafío
    public List<Text> timeResults;          // Textos en los paneles de victoria a reemplazar con el tiempo logrado
    public List<Text> blockCountResults;    // Textos en los paneles de victoria a reemplazar con el número de bloques usado
    public List<Text> scoreResults;         // Textos en los paneles de victoria a reemplazar con la calificación obtenida

    public List<Text> chrono;               // Textos a reemplazar en los canvas por el tiempo de intento
    private float chronoTime = 0.0f;        // Contador
    private bool chronoRunning = false;     // Bool para manejar el inicio, pausa y reseteo del contador

    public WorkspaceView ublocklyWorkspace; // Elemento workspace de ublockly en el canvas
    public PlayControlView controlPanel;    // Elemento control panel de ublockly en el canvas
    public SettingsMenuManager settingsMenuManager; // Manager del menú de opciones para pedir una actualización de los botones de estadísticas al ganar un nivel
    private StatsManager statsManager;              // Manager de estadísticas para guardar los valores de un intento

    public List<GameObject> spawnPoints; // Lugares de aparición de robots
    public List<GameObject> flags;       // Banderas de victoria
    public List<GameObject> movableObjects; // Objetos a reiniciar posición, rotación y cinética al inicio de cada intento
    private List<GameObject> robots = new List<GameObject>();   // Lista de robots

    public string levelName;        // Nombre del nivel para guardar en las estadísticas de juego
    public int devStatsMinutes;     // Valor de los minutos a vencer
    public int devStatsSeconds;     // Valor de los segundos a vencer
    public int devStatsBlocksUsed;  // Valor de los bloques usados a vencer

    private void Awake() {
        if (PlayerPrefs.GetString("Code") != "" && skyboxes.Count > 0) {
            spawnPoints = new List<GameObject>();
            flags = new List<GameObject>();
            movableObjects = new List<GameObject>();
            JObject level;
            try {
                level = JObject.Parse(PlayerPrefs.GetString("Code"));
            }
            catch (JsonReaderException e) {
                Debug.LogException(e);
                return;
            }

            string skybox = level["environment"]["skybox"].ToString();
            RenderSettings.skybox = skyboxes.Find(select => select.name == skybox);
            levelName = level["environment"]["level_name"].ToString();
            devStatsMinutes = int.Parse(level["environment"]["dev_minutes"].ToString());
            devStatsSeconds = int.Parse(level["environment"]["dev_seconds"].ToString());
            devStatsBlocksUsed = int.Parse(level["environment"]["dev_blocks"].ToString());

            List<JArray> allJsonContainers = new List<JArray>() {
                level["spawnpoints"] as JArray,
                level["flags"] as JArray,
                level["level"] as JArray
            };

            foreach (JArray container in allJsonContainers) {
                foreach (JObject objectJson in container) {
                    string objectName = Regex.Replace(objectJson["name"].ToString(), @"\s\d+$", "");
                    GameObject correspondingObject = new GameObject();
                    foreach (GameObject element in prefabs) {
                        if (element.name == objectName) {
                            correspondingObject = element;
                        }
                    }
                    string objectPosition = objectJson["position"].ToString();
                    objectPosition = objectPosition.Trim('(', ')');
                    string[] positionValues = objectPosition.Split(',');
                    int xPos = (int)float.Parse(positionValues[0], CultureInfo.InvariantCulture);
                    int yPos = (int)float.Parse(positionValues[1], CultureInfo.InvariantCulture);
                    int zPos = (int)float.Parse(positionValues[2], CultureInfo.InvariantCulture);
                    Vector3 worldCellPosition = buildGrid.CellToWorld(new Vector3Int(xPos, yPos, zPos));
                    worldCellPosition.x += buildGrid.cellSize.x / 2;
                    worldCellPosition.z += buildGrid.cellSize.z / 2;

                    string objectRotation = objectJson["rotation"].ToString();
                    objectRotation = objectRotation.Trim('(', ')');
                    string[] rotationValues = objectRotation.Split(',');
                    float xRot = float.Parse(rotationValues[0], CultureInfo.InvariantCulture);
                    float yRot = float.Parse(rotationValues[1], CultureInfo.InvariantCulture);
                    float zRot = float.Parse(rotationValues[2], CultureInfo.InvariantCulture);
                    float wRot = float.Parse(rotationValues[3], CultureInfo.InvariantCulture);
                    Quaternion objectWorldRotation = new Quaternion(xRot, yRot, zRot, wRot);
                    GameObject objectInstance = Instantiate(correspondingObject, worldCellPosition, objectWorldRotation);
                    GameObject[] allObjects = FindObjectsByType<GameObject>(FindObjectsInactive.Exclude, FindObjectsSortMode.None);
                    GameObject[] matchingObjects = allObjects.Where(obj => obj.name.StartsWith(correspondingObject.name)).ToArray();
                    int index = 0;
                    while (matchingObjects.Any(element => { string pattern = $@"\b{index}$"; return Regex.IsMatch(element.name, pattern); })) {
                        index++;
                    }
                    objectInstance.name = correspondingObject.name + " " + index;
                    foreach (JObject option in objectJson["options"] as JArray) {
                        objectInstance.GetComponent<GenericBlock>().SetOption(option.Properties().First().Name, option.Properties().First().Value.ToString());
                    }
                    if (objectName == "Flag") {
                        objectInstance.transform.SetParent(flagFolder.transform);
                        flags.Add(objectInstance);
                    } else if (objectName == "Spawnpoint") {
                        objectInstance.transform.SetParent(spawnpointsFolder.transform);
                        objectInstance.transform.GetChild(0).gameObject.SetActive(false);
                        spawnPoints.Add(objectInstance);
                    } else {
                        objectInstance.transform.SetParent(buildGrid.transform);
                    }
                }
            }
        }
    }

    void Start() {  // Guardamos en una lista los robots para más fácil acceso, luego los movemos a sus respectivos lugares de aparición
                    // y nos suscribimos al evento de sensorMissing para avisar con un error cuando se intente acceder a un sensor que no existe
        for (int i = 0; i < spawnPoints.Count; i++) {
            robots.Add(VaultManager.vaultInstance.getObject("Robot " + (i + 1)));
            robots[i].transform.position = spawnPoints[i].transform.position;
            robots[i].transform.rotation = spawnPoints[i].transform.rotation;
            robots[i].GetComponent<RobotManager>().sensorMissing += ShowError;
        }
        // Desactivamos la cinética de los robots y objetos a reiniciar por intento
        DisableElements();
        // Guardamos la posición y rotación de los objetos a reiniciar por intento
        foreach (GameObject movableObject in movableObjects) {
            movableObjectsSpawnPositions.Add(movableObject.transform.position);
            movableObjectsSpawnRotations.Add(movableObject.transform.rotation);
        }
        // Nos suscribimos a los eventos de victoria de todas las banderas
        foreach (GameObject flag in flags) {
            flag.GetComponent<FlagBehaviour>().OnRobotWin += Victory;
        }
        // Reiniciamos el contador de tiempo
        foreach (Text chr in chrono) {
            chr.text = "00:00";
        }
        // Obtenemos la referencia al manager de estadísticas y le introducimos los valores del récord a batir (dev stats)
        statsManager = VaultManager.vaultInstance.getObject("StatsManager").GetComponent<StatsManager>();
        statsManager.addDevStats(levelName, new Stats(new List<int>(2) { devStatsMinutes, devStatsSeconds }, devStatsBlocksUsed, "X"));
    }

    void Update() { // Cada tick actualizamos el contador de tiempo
        UpdateChrono();
    }

    void ShowError((string type, string position) message) { // Abre el panel de error con el error a enseñar
        errorTitle.text = "Missing " + message.type + " sensor at the " + message.position + " slot";
        errorPanel.SetActive(true);
    }

    public void ClearError() { // Cierra el panel de error
        errorPanel.SetActive(false);
    }

    public void EnableElements() { // Esta función activa la cinética de los robots y objetos a reiniciar por intento
        foreach (GameObject robot in robots) {
            robot.GetComponent<RobotManager>().EnableRobotPhysics();
        }
        foreach (GameObject movableObject in movableObjects) {
            if (movableObject.GetComponent<Rigidbody>() != null) {
                movableObject.GetComponent<Rigidbody>().isKinematic = false;
            }
        }
    }

    public void DisableElements() { // Esta función desactiva la cinética de los robots y objetos a reiniciar por intento
        foreach (GameObject robot in robots) {
            robot.GetComponent<RobotManager>().DisableRobotPhysics();
        }
        foreach (GameObject movableObject in movableObjects) {
            if (movableObject.GetComponent<Rigidbody>() != null) {
                movableObject.GetComponent<Rigidbody>().isKinematic = true;
            }
        }
    }

    public void StartChrono() { // Inicia el contador de tiempo
        chronoRunning = true;
    }

    public void PauseChrono() { // Pausa el contador de tiempo
        chronoRunning = false;
    }

    public void ResetChrono() { // Pausa y reinicia el contador de tiempo (el texto no, puede añadirse si se desea)
        chronoRunning = false;
        chronoTime = 0.0f;
        //foreach (Text chronoText in chrono) {
        //    chronoText.text = "00:00";
        //}
    }

    public void ResetLevel() { // Reinicia el nivel por completo
        // Paramos el intérprete de ublockly si estuviese ejecutándose
        UBlockly.CSharp.Runner.Stop();
        // Desactivamos la cinética de robots y objetos a reiniciar por intento
        DisableElements();
        // Movemos al punto de aparición robots y objetos
        for (int i = 0; i < spawnPoints.Count; i++) {
            robots[i].transform.position = spawnPoints[i].transform.position;
            robots[i].transform.rotation = spawnPoints[i].transform.rotation;
        }
        for (int i = 0; i < movableObjects.Count; i++) {
            movableObjects[i].transform.position = movableObjectsSpawnPositions[i];
            movableObjects[i].transform.rotation = movableObjectsSpawnRotations[i];
        }
        // Reiniciamos el contador de tiempo
        ResetChrono();
        // Limpiamos las señales enviadas
        CommsManager.commsManager.RemoveAllSignals();
        // Limpiamos las agrupaciones de robots
        CommsManager.commsManager.ClearGroups();
        // Activamos los scripts de las banderas por si están desactivados debido a una victoria
        foreach (GameObject flag in flags) {
            flag.GetComponent<FlagBehaviour>().enabled = true;
        }
        OnReset?.Invoke(); // Lanzamos el evento de reinicio para los interactuables
    }

    void UpdateChrono () { // Actualiza el valor del contador de tiempo
        if (chronoRunning) {
            chronoTime += Time.deltaTime;
            int min = (int)(chronoTime / 60);
            int sec = (int)(chronoTime % 60);
            foreach (Text chr in chrono) {
                chr.text = string.Format("{0:00}:{1:00}", min, sec);
            }
            
        }
    }

    void Victory() { // En caso de victoria
        // Paramos al intérprete de ublockly si estuviese en ejecución y desactivamos la cinética de robots y objetos
        UBlockly.CSharp.Runner.Stop();
        DisableElements();
        // Si la victoria se obtuvo en ejecución normal y no con debug para evitar hacer trampas:
        if (!controlPanel.getDebugMode()) {
            // Desactivamos el contador de tiempo
            chronoRunning = false;
            // Obtenemos las estadísticas del nivel y subimos al manager de estadísticas las obtenidas en este intento
            Stats devStats = statsManager.getDevStats(levelName);
            statsManager.addStats(levelName, new Stats(new List<int>() { (int)(chronoTime / 60), (int)(chronoTime % 60) }, ublocklyWorkspace.GetUsedBlocks(), CalculateScore(devStats)));
            // Ahora mostramos y establecemos en cada victory panel los resultados
            for (int i = 0; i < victoryPanels.Count; i++) {
                victoryPanels[i].SetActive(true);
                challengeTitles[i].text = levelName;
                timeResults[i].text = chrono[0].text;
                blockCountResults[i].text = ublocklyWorkspace.GetUsedBlocks().ToString();
                scoreResults[i].text = CalculateScore(devStats);
            }
            // Llamamos al manager del menú de opciones para avisarle de que tiene que actualizar los botones de stats por nivel
            settingsMenuManager.SetChallengeButtons();
        }
        // Desactivamos los scripts de las banderas para que dejen de contar si son por timer
        foreach (GameObject flag in flags) {
            flag.GetComponent<FlagBehaviour>().enabled = false;
        }
    }

    public void Improve() { // Esta función se llama al pulsar el botón de mejorar intento en el panel de victoria
        // Reinicia el nivel y desactiva los paneles de victoria para seguir jugando
        ResetLevel();
        for (int i = 0; i < victoryPanels.Count; i++) {
            victoryPanels[i].SetActive(false);
        }
    }

    public List<GameObject> GetRobots() { // Devuelve la lista de robots
        return robots;
    }

    public List<GameObject> GetFlags() {
        return flags;
    }

    string CalculateScore(Stats devStats) { // Calcula las puntuaciones/calificación de un intento teniendo en cuenta los valores a vencer
        int min = (int)(chronoTime / 60);
        int sec = (int)(chronoTime % 60);
        int blocks = ublocklyWorkspace.GetUsedBlocks();
        int devMin = devStats.bestTime[0];
        int devSec = devStats.bestTime[1];
        int devBlocks = devStats.blockCount;

        // S+ si el tiempo es menor que el del dev y usa menos bloques
        if (min < devMin && blocks < devBlocks || min == devMin && sec < devSec && blocks < devBlocks) {
            return "S+";
        }
        // S si el tiempo es menor que el del dev y usa los mismos bloques
        if (min < devMin && blocks == devBlocks || min == devMin && sec < devSec && blocks == devBlocks) {
            return "S";
        }
        // A si el tiempo es mayor o igual que el del dev pero usa menos bloques
        if (blocks < devBlocks) {
            return "A";
        }
        // S si el tiempo es mayor o igual que el del dev pero usa los mismos bloques
        if (blocks == devBlocks) {
            return "B";
        }
        int extraSeconds = (min * 60 + sec) - (devMin * 60 - sec);
        // C si el tiempo es mayor que el del dev por menos de 10 segundos y usa más bloques
        if (extraSeconds <= 10) {
            return "C";
        }
        // C si el tiempo es mayor que el del dev por menos de 30 segundos y usa más bloques
        if (extraSeconds <= 30) {
            return "D";
        }
        // F si el tiempo es mayor que el del dev por más de 30 segundos y usa más bloques
        return "F";
    }

    public void ExitLevel() { // Vuelve al menú de selección de niveles
        SceneManager.LoadScene(1);
    }
}
