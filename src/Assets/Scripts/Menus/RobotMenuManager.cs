/**
* Universidad de La Laguna
* Proyecto: Roblockly
* Autor: Edwin Plasencia Hernández
* Email: alu0101329888@ull.edu.es
* Fecha: 08/05/2024
* Descripción: RobotMenuManager: Manager del menú de selección de robot para dar utilidad a los
*                                botones del canvas y elegir correctamente el robot a utilizar
*                                además de instalar los sensores
*/

using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class RobotMenuManager : MonoBehaviour {
    const int SEPARATION = 30;      // Separación entre plataformas
    const int MAX_ROBOT_COUNT = 10; // Número máximo de robots que pudiesen pedirse en un nivel

    /* Ahora mismo, el valor máximo es 10 ya que dudo que alguna vez se cree un nivel en el que se usen más de 10 robots.
     * En un caso futuro en el que esto quiera cambiarse, deberá modificarse este valor en el script y añadir más bloques
     * de robot en la librería de uBlockly o buscar una solución dinámica para crear tantos bloques de robots como se
     * quieran. No estoy seguro de si esto último es siquiera posible con lo que la librería viene por defecto, es por
     * ello que simplemente creé 10 bloques de robot 1, 2, 3... y los hago visibles o no dependiendo del nº de robots del nivel,
     * si se encontrase tal solución, habría que encontrar una forma de eliminar también todos los robots creados del
     * vault, considerando que pueden ser infinitos, o procurar eliminarlos al salir del nivel pero que no lleguen a esta escena
     * sin ser destruidos, ya que se combinarían con los nuevos de mismo nombre y podría dar problemas o permitir acceder a
     * un nivel con más robots que los esperados a usar.
     */

    private int platformCount;  // Número de plataformas/robots a usar en el nivel seleccionado
    private int robotTypeCount; // Número de robots diferentes que hay

    public GameObject platform;                                     // Plataforma principal
    private List<GameObject> platformList = new List<GameObject>(); // Lista en la que guardar todas las plataformas a crear
    private List<int> chosenRobotPerPlatform = new List<int>();     // Lista en la que guardar el robot elegido por plataforma

    public SensorMenuManager sensorMenuManager;

    public Text platformPositionText; // Texto del canvas que indica la plataforma elegida
    public Text robotNameText;        // Texto del canvas que indica el robot elegido

    private int currentPlatform = 0; // Plataforma seleccionada

    void Start() {
        robotTypeCount = platform.transform.GetChild(0).childCount;     // Obtenemos el número de tipos de robot
        platformCount = PlayerPrefs.GetInt("Robot count");              // Obtenemos el número de robots a utilizar en el siguiente nivel
        chosenRobotPerPlatform = new List<int>(new int[platformCount]);
        ClearRobotsFromVault();                                 // Limpiamos y eliminamos cualquier robot que pudiese quedar de un nivel anterior
        InitializePlatforms();                                  // Clonamos las plataformas
    }

    void Update() { // Update se usa para mover las plataformas usando Mathf.Lerp de manera que se vea el movimiento fluido
        for (int i = 0; i < platformCount; i++) {
            Vector3 nextPos = platformList[i].transform.position;
            nextPos.x = Mathf.Lerp(nextPos.x, SEPARATION * (i - currentPlatform), 10.0f * Time.deltaTime);
            platformList[i].transform.position = nextPos;
        }
    }

    private void ClearRobotsFromVault() { // Limpia cualquier robot que pueda haber en el vault y lo destruye
        for (int i = 0; i < MAX_ROBOT_COUNT; i++) {
            VaultManager.vaultInstance.removeObject("Robot " + (i + 1));
        }
    }

    private void InitializePlatforms() { // Clona la plataforma principal "el número de robots necesario" veces y las mueve a su lugar en la fila, luego las añade a la lista
        platformList.Add(platform);
        for (int i = 1; i < platformCount; i++) {
            GameObject newPlatform = Instantiate(platform);
            newPlatform.transform.position = new Vector3(platform.transform.position.x + SEPARATION * i, platform.transform.position.y, platform.transform.position.z);
            platformList.Add(newPlatform);
        }
    }

    public void ChangePlatform(int movement) { // Cambia el currentPlatform o plataforma seleccionada dado 1 (derecha) o -1 (izquierda) y actualiza los textos
        if (currentPlatform + movement >= platformCount) {
            currentPlatform = 0;
        } else if (currentPlatform + movement < 0) {
            currentPlatform = platformCount - 1;
        } else {
            currentPlatform += movement;
        }
        platformPositionText.text = "#" + (currentPlatform + 1);
        robotNameText.text = platformList[currentPlatform].transform.GetChild(0).GetChild(chosenRobotPerPlatform[currentPlatform]).name;
        sensorMenuManager.ForceUpdate();
    }

    public void ChangeRobot(int movement) { // Cambia el chosenRobot o robot seleccionado dado 1 (derecha) o -1 (izquierda) y actualiza los textos
        if (chosenRobotPerPlatform[currentPlatform] + movement >= robotTypeCount) {
            chosenRobotPerPlatform[currentPlatform] = 0;
        } else if (chosenRobotPerPlatform[currentPlatform] + movement < 0) {
            chosenRobotPerPlatform[currentPlatform] = robotTypeCount - 1;
        } else {
            chosenRobotPerPlatform[currentPlatform] += movement;
        }
        robotNameText.text = platformList[currentPlatform].transform.GetChild(0).GetChild(chosenRobotPerPlatform[currentPlatform]).name;
        for (int i = 0; i < robotTypeCount; i++) {
            platformList[currentPlatform].transform.GetChild(0).GetChild(i).gameObject.SetActive(i == chosenRobotPerPlatform[currentPlatform]);
        }
        sensorMenuManager.ForceUpdate();
    }

    public void Confirm() { // Cambia el nombre de todos los robots elegidos a Robot 1, Robot 2, ... y los guarda en el vault, luego carga el nivel correspondiente
        for (int i = 0; i < platformCount; i++) {
            GameObject tempRobotReference = platformList[i].transform.GetChild(0).GetChild(chosenRobotPerPlatform[i]).gameObject;
            tempRobotReference.name = "Robot " + (i + 1);
            tempRobotReference.transform.parent = null; // Es necesario mover los objetos a la raíz de la escena para poder hacerlos permanentes
            VaultManager.vaultInstance.addObject(tempRobotReference);
        }
        SceneManager.LoadScene(PlayerPrefs.GetInt("Level"));
    }

    public void GoBack() { // Vuelve a la escena anterior
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex - 1);
    }

    public GameObject GetRobot() { // Devuelve el objeto robot seleccionado
        return platformList[currentPlatform].transform.GetChild(0).GetChild(chosenRobotPerPlatform[currentPlatform]).gameObject;
    }
}
