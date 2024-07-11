/**
* Universidad de La Laguna
* Proyecto: Roblockly
* Autor: Edwin Plasencia Hernández
* Email: alu0101329888@ull.edu.es
* Fecha: 09/05/2024
* Descripción: SensorMenuManager: Manager del menú de selección de sensores
*/

using UnityEngine;

public class SensorMenuManager : MonoBehaviour {
    public GameObject gyroscopeSensor; // Prefab del sensor de giroscopio
    //public GameObject sensor2;       // Posible sensor interno a implementar
    //public GameObject sensor3;       // Posible sensor interno a implementar

    public RobotMenuManager robotMenuManager; // Instancia del robot menu manager para obtener la plataforma y robots seleccionados
    public GameObject selectedRobot;          // Variable donde guardaremos el robot que se está modificando

    public GameObject gyroscopeCheckBox; // Checkbox del canvas que indica si está o no instalado un giroscopio
    //public GameObject Sensor2CheckBox; // Posible sensor interno a implementar
    //public GameObject Sensor3CheckBox; // Posible sensor interno a implementar

    private GameObject draggedSensor = null;         // Sensor que se está arrastrando
    private GameObject draggedSensorInstance = null; // Instancia del sensor que se está arrastrando
    private const float DRAGGING_DISTANCE = 20.0f;   // Distancia a la que mover el sensor que se está arrastrando en el eje z (distancia al canvas)
    public LayerMask raycastLayer; // Capa en la que colisionará el raycast, tiene que ser la misma que la de los snap ya que queremos que el raycast
                                   // colisione con los collider de los snap únicamente

    void Start() {
        selectedRobot = robotMenuManager.GetRobot(); // Actualizamos la variable del robot que está siendo utilizado
    }

    void Update() { // Si se está arrastrando un sensor lo movemos a la posición del ratón
        if (draggedSensorInstance != null && Input.GetMouseButton(0)) {
            Vector3 mousePos = Input.mousePosition;
            mousePos.z = DRAGGING_DISTANCE;
            draggedSensorInstance.transform.position = Camera.main.ScreenToWorldPoint(mousePos);
        } else { // Si no se está arrastrando nada o se acaba de levantar el click del ratón, borramos el sensor si es que existe
            UnloadSensor();
        }
    }

    public void ForceUpdate() { // Pide al RobotMenuManager la información actualizada del robot y actualiza el canvas (los checkboxes)
        selectedRobot = robotMenuManager.GetRobot();
        gyroscopeCheckBox.SetActive(false);
        if (selectedRobot.GetComponent<RobotManager>().HasSensor("gyroscope")) {
            gyroscopeCheckBox.SetActive(true);
        }
        //Sensor2CheckBox.SetActive(false);
        //if (selectedRobot.transform.Find("Gyroscope Sensor") != null) {
        //    Sensor2CheckBox.SetActive(true);
        //}
        //Sensor3CheckBox.SetActive(false);
        //if (selectedRobot.transform.Find("Gyroscope Sensor") != null) {
        //    Sensor3CheckBox.SetActive(true);
        //}
    }

    public void LoadSensor(GameObject sensor) { // Esta función es llamada por los botones cuando son clicados, guarda el sensor clicado,
                                                // crea una instancia del mismo para ser arrastrado por Update() y activa los discos snap rojos del robot.
        draggedSensor = sensor;
        draggedSensorInstance = Instantiate(draggedSensor);
        selectedRobot.GetComponent<RobotManager>().EnableSnaps();
    }

    public void UnloadSensor() { // Borra el sensor que está siendo arrastrado y desactiva los discos snap rojos del robot.
        if (draggedSensorInstance != null) {
            Destroy(draggedSensorInstance);
            draggedSensorInstance = null;
        }
        selectedRobot.GetComponent<RobotManager>().DisableSnaps();
    }

    public void InstallSensor() { // Esta función es llamada por los botones cuando dejan de ser clicados, lanza un rayo en la dirección del ratón
                                  // y si colisiona con un snap, instala el sensor en dicho punto obteniendo el nombre del snap y pasándoselo al
                                  // script de RobotManager en la función AddSensor junto al propio sensor.
        RaycastHit hit;
        if (Physics.Raycast(Camera.main.ScreenPointToRay(Input.mousePosition), out hit, Mathf.Infinity, raycastLayer)) {
            selectedRobot.GetComponent<RobotManager>().AddSensor(draggedSensor, hit.collider.transform.name);
        }
    }

    public void ClearRobot() { // Llama a ClearAllSensors del RobotManager para quitar todos los sensores y actualiza el canvas
        selectedRobot.GetComponent<RobotManager>().ClearAllSensors();
        ForceUpdate();
    }

    public void ClickGyroscope() { // Añade un giroscopio al robot y activa la casilla o lo elimina y la desactiva.
                                   // Ya que el sensor es interno, no se puede llamar a InstallSensor y se tiene que hacer
                                   // una función específica para la instalación de cada uno, podría buscarse una implementación
                                   // mejor para que el botón de giroscopio contenga el prefab del sensor que se debe instalar como
                                   // con todos los demás para así también evitar crear una función por sensor interno, pero ya que
                                   // son pocas líneas de código y solo existe un sensor interno actualmente, he considerado
                                   // esta implementación como suficiente.
        if (!gyroscopeCheckBox.activeSelf) {
            selectedRobot.GetComponent<RobotManager>().AddSensor(gyroscopeSensor, "internalSensor1");
        } else {
            selectedRobot.GetComponent<RobotManager>().RemoveSensor("internalSensor1");
        }
        gyroscopeCheckBox.SetActive(!gyroscopeCheckBox.activeSelf);
    }

    //public void ClickSensor2() {
    //    if (!Sensor2CheckBox.activeSelf) {
    //        selectedRobot.GetComponent<RobotManager>().AddSensor(sensor2, "internalSensor2");
    //    } else {
    //        selectedRobot.GetComponent<RobotManager>().RemoveSensor("internalSensor2");
    //    }
    //    Sensor2CheckBox.SetActive(!Sensor2CheckBox.activeSelf);
    //}

    //public void ClickSensor3() {
    //    if (!Sensor3CheckBox.activeSelf) {
    //        selectedRobot.GetComponent<RobotManager>().AddSensor(sensor3, "internalSensor3");
    //    } else {
    //        selectedRobot.GetComponent<RobotManager>().RemoveSensor("internalSensor3");
    //    }
    //    Sensor3CheckBox.SetActive(!Sensor3CheckBox.activeSelf);
    //}
}
