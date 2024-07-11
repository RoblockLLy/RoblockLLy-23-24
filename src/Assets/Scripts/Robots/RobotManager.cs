/**
* Universidad de La Laguna
* Proyecto: Roblockly
* Autor: Edwin Plasencia Hernández
* Email: alu0101329888@ull.edu.es
* Fecha: 11/05/2024
* Descripción: RobotManager: Manager de los robots, almacena los sensores instalados y los llama cuando es necesario
*                            para obtener la información.
*/

using System;
using System.Collections.Generic;
using UnityEngine;

public class RobotManager : MonoBehaviour {

    // Variables donde se guardan los snap points del modelo prefab para tener sus referencias
    public GameObject frontSnap;
    public GameObject frontRightSnap;
    public GameObject frontLeftSnap;
    public GameObject leftSnap;
    public GameObject rightSnap;
    public GameObject backSnap;

    // Variables donde guardaremos las referencias a los sensores instalados en cada slot
    private GameObject frontSensor = null;
    private GameObject frontRightSensor = null;
    private GameObject frontLeftSensor = null;
    private GameObject leftSensor = null;
    private GameObject rightSensor = null;
    private GameObject backSensor = null;
    private GameObject internalSensor1 = null;
    private GameObject internalSensor2 = null;
    private GameObject internalSensor3 = null;

    public event Action<(string, string)> sensorMissing;

    void Start() {}

    void Update() {}

    public void EnableRobotPhysics() { // Activa la cinemática del robot
        GetComponent<Rigidbody>().isKinematic = false;
    }

    public void DisableRobotPhysics() { // Desactiva la cinemática del robot
        GetComponent<Rigidbody>().isKinematic = true;
    }

    public void AddSensor(GameObject sensor, string snap) { // Dado un sensor sin instanciar y el nombre de un snap point, se instala y almacena
                                                            // una instancia de dicho sensor en el slot correspondiente
        switch (snap) {
            case "front_snap":
                frontSensor = ConnectSensor(frontSensor, sensor, frontSnap);
                break;
            case "front_left_snap":
                frontLeftSensor = ConnectSensor(frontLeftSensor, sensor, frontLeftSnap);
                break;
            case "front_right_snap":
                frontRightSensor = ConnectSensor(frontRightSensor, sensor, frontRightSnap);
                break;
            case "left_snap":
                leftSensor = ConnectSensor(leftSensor, sensor, leftSnap);
                break;
            case "right_snap":
                rightSensor = ConnectSensor(rightSensor, sensor, rightSnap);
                break;
            case "back_snap":
                backSensor = ConnectSensor(backSensor, sensor, backSnap);
                break;
            case "internalSensor1":
                internalSensor1 = ConnectSensor(internalSensor1, sensor, null);
                break;
            case "internalSensor2":
                internalSensor2 = ConnectSensor(internalSensor2, sensor, null);
                break;
            case "internalSensor3":
                internalSensor3 = ConnectSensor(internalSensor3, sensor, null);
                break;
            default:
                break;
        }
    }

    public void RemoveSensor(string snap) { // Dado el nombre de un snap point, se elimina el sensor instalado en él y se destruye
        switch (snap) {
            case "front_snap":
                Destroy(frontSensor);
                frontSensor = null;
                break;
            case "front_left_snap":
                Destroy(frontLeftSensor);
                frontSensor = null;
                break;
            case "front_right_snap":
                Destroy(frontRightSensor);
                frontSensor = null;
                break;
            case "left_snap":
                Destroy(leftSensor);
                frontSensor = null;
                break;
            case "right_snap":
                Destroy(rightSensor);
                frontSensor = null;
                break;
            case "back_snap":
                Destroy(backSensor);
                frontSensor = null;
                break;
            case "internalSensor1":
                Destroy(internalSensor1);
                frontSensor = null;
                break;
            case "internalSensor2":
                Destroy(internalSensor2);
                frontSensor = null;
                break;
            case "internalSensor3":
                Destroy(internalSensor3);
                frontSensor = null;
                break;
            default:
                break;
        }
    }

    public void ClearAllSensors() { // Elimina todos los sensores instalados
        RemoveSensor("front_snap");
        RemoveSensor("front_left_snap");
        RemoveSensor("front_right_snap");
        RemoveSensor("left_snap");
        RemoveSensor("right_snap");
        RemoveSensor("back_snap");
        RemoveSensor("internalSensor1");
        RemoveSensor("internalSensor2");
        RemoveSensor("internalSensor3");
    }

    private GameObject ConnectSensor(GameObject sensorContainer, GameObject sensor, GameObject snap) { // Instala un sensor dado el mismo, el slot y el snap
        // Si hay hueco en el slot:
        if (sensorContainer == null) {
            // Se instancia el sensor y se emparenta al robot
            GameObject sensorInstance = Instantiate(sensor);
            sensorInstance.transform.parent = transform;
            // Si se ha especificado snap se instala en el mismo, es decir, se mueve y se rota al snap
            if (snap != null) {
                sensorInstance.transform.position = snap.transform.position;
                sensorInstance.transform.rotation = snap.transform.rotation;
            } else {
                // En otro caso se mueve al centro del robot (es interno)
                sensorInstance.transform.position = transform.position;
            }
            // Se guarda en el slot
            sensorContainer = sensorInstance;
        }
        return sensorContainer;
    }

    public bool HasSensor(string sensorName) { // Devuelve sí o no, dependiendo de si un sensor se encuentra instalado en el robot
        // Guardamos todos los slots en una lista para más fácil acceso
        List<GameObject> sensors = new List<GameObject>() { frontSensor, frontRightSensor, frontLeftSensor, leftSensor, rightSensor, backSensor , internalSensor1 , internalSensor2, internalSensor3 };
        // Preguntamos a cada sensor qué tipo es, devolvemos true si encontramos uno del mismo nombre a buscar ("Contact", "Ultrasound", ...) o false si no
        foreach (GameObject sensor in sensors) {
            if (sensor != null && sensor.GetComponent<GenericSensorManager>().GetName() == sensorName) {
                return true;
            }
        }
        return false;
    }

    public string GetSensorReading(string position, string type) { // Devolvemos el valor de la lectura del sensor especificado en el slot pertinente
        switch (position) {
            case "front":
                if (frontSensor != null && frontSensor.GetComponent<GenericSensorManager>().GetName() == type) {
                    return frontSensor.GetComponent<GenericSensorManager>().GetReading();
                } else {
                    sensorMissing.Invoke((type, position));
                }
                break;
            case "front left":
                if (frontLeftSensor != null && frontLeftSensor.GetComponent<GenericSensorManager>().GetName() == type) {
                    return frontLeftSensor.GetComponent<GenericSensorManager>().GetReading();
                } else {
                    sensorMissing.Invoke((type, position));
                }
                break;
            case "front right":
                if (frontRightSensor != null && frontRightSensor.GetComponent<GenericSensorManager>().GetName() == type) {
                    return frontRightSensor.GetComponent<GenericSensorManager>().GetReading();
                } else {
                    sensorMissing.Invoke((type, position));
                }
                break;
            case "left":
                if (leftSensor != null && leftSensor.GetComponent<GenericSensorManager>().GetName() == type) {
                    return leftSensor.GetComponent<GenericSensorManager>().GetReading();
                } else {
                    sensorMissing.Invoke((type, position));
                }
                break;
            case "right":
                if (rightSensor != null && rightSensor.GetComponent<GenericSensorManager>().GetName() == type) {
                    return rightSensor.GetComponent<GenericSensorManager>().GetReading();
                } else {
                    sensorMissing.Invoke((type, position));
                }
                break;
            case "back":
                if (backSensor != null && backSensor.GetComponent<GenericSensorManager>().GetName() == type) {
                    return backSensor.GetComponent<GenericSensorManager>().GetReading();
                } else {
                    sensorMissing.Invoke((type, position));
                }
                break;
            case "internalSensor1":
                if (internalSensor1 != null && internalSensor1.GetComponent<GenericSensorManager>().GetName() == type) {
                    return internalSensor1.GetComponent<GenericSensorManager>().GetReading();
                } else {
                    sensorMissing.Invoke((type, position));
                }
                break;
            case "internalSensor2":
                if (internalSensor2 != null && internalSensor2.GetComponent<GenericSensorManager>().GetName() == type) {
                    return internalSensor2.GetComponent<GenericSensorManager>().GetReading();
                } else {
                    sensorMissing.Invoke((type, position));
                }
                break;
            case "internalSensor3":
                if (internalSensor3 != null && internalSensor3.GetComponent<GenericSensorManager>().GetName() == type) {
                    return internalSensor3.GetComponent<GenericSensorManager>().GetReading();
                } else {
                    sensorMissing.Invoke((type, position));
                }
                break;
        }
        return null;
    }

    public void EnableSnaps() { // Se activa el mesh renderer de los snap para que se vean los discos rojos a la hora de poner los sensores
        frontSnap.GetComponent<MeshRenderer>().enabled = true;
        frontRightSnap.GetComponent<MeshRenderer>().enabled = true;
        frontLeftSnap.GetComponent<MeshRenderer>().enabled = true;
        leftSnap.GetComponent<MeshRenderer>().enabled = true;
        rightSnap.GetComponent<MeshRenderer>().enabled = true;
        backSnap.GetComponent<MeshRenderer>().enabled = true;
    }

    public void DisableSnaps() { // Se desactivan los mesh renderer de los snap para que no se vean los discos rojos
        frontSnap.GetComponent<MeshRenderer>().enabled = false;
        frontRightSnap.GetComponent<MeshRenderer>().enabled = false;
        frontLeftSnap.GetComponent <MeshRenderer>().enabled = false;
        leftSnap.GetComponent<MeshRenderer>().enabled = false;
        rightSnap.GetComponent<MeshRenderer>().enabled = false;
        backSnap.GetComponent<MeshRenderer>().enabled = false;
    }
}
