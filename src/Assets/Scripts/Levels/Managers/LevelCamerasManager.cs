/**
* Universidad de La Laguna
* Proyecto: Roblockly
* Autor: Edwin Plasencia Hernández
* Email: alu0101329888@ull.edu.es
* Fecha: 13/05/2024
* Descripción: LevelCamerasManager: Este script maneja las cámaras y canvas de la escena correctamente dependiendo
*                                   de los botones clicados y las cámaras a renderizar.
*/

using System.Collections.Generic;
using UnityEngine;

public class LevelCamerasManager : MonoBehaviour {
    // Manager del nivel para poder obtener los robots de la escena fácilmente
    public LevelManager levelManager;
    // Lista de robots
    private List<GameObject> robots;
    // Lista de robots
    private List<GameObject> flags;
    // Cámaras a usar, la principal de programación, la de vista aéreay la de tercera persona
    public Camera mainCamera;
    public Camera topCamera;
    public Camera robotCamera;
    // "Brazo" de la cámara del robot para rotarla alrededor del mismo
    public GameObject robotCameraHandle;
    // Canvas de la escena que contienen los botones de cámara
    public Canvas mainCanvas;
    public Canvas topCanvas;
    public Canvas robotCanvas;
    // Variables de seguimiento para saber qué cámara se ve actualmente y a qué robot
    private int currentCamera = 0;
    private int currentRobot = 0;

    void Start() { // Obtenemos los robots y desactivamos también el script de movimiento de cámara
        robots = levelManager.GetRobots();
        flags = levelManager.GetFlags();
        robotCameraHandle.GetComponent<RobotCameraHandleRotator>().enabled = false;
    }

    void Update() { // Movemos la cámara de tercera persona al robot que estamos espectando y apuntamos los nombres de los robots y banderas a las cámaras
        robotCameraHandle.transform.position = robots[currentRobot].transform.position;
        if (currentCamera == 2) {
            foreach (GameObject robot in robots) {
                robot.transform.Find("Name").LookAt(robot.transform.Find("Name").transform.position + robotCamera.transform.forward);
            }
            foreach (GameObject flag in flags) {
                if (flag.transform.Find("Timer") != null) {
                    flag.transform.Find("Timer").LookAt(flag.transform.Find("Timer").transform.position + robotCamera.transform.forward);
                }
            }
        } else {
            foreach (GameObject robot in robots) {
                robot.transform.Find("Name").LookAt(robot.transform.Find("Name").transform.position + topCamera.transform.forward);
            }
            foreach (GameObject flag in flags) {
                if (flag.transform.Find("Timer") != null) {
                    flag.transform.Find("Timer").LookAt(flag.transform.Find("Timer").transform.position + topCamera.transform.forward);
                }
            }
        }
    }

    public void ToggleTags() { // Activa o desactiva los nombres visibles de los robots
        for (int i = 0; i < robots.Count; i++) {
            robots[i].transform.Find("Name").gameObject.GetComponent<TextMesh>().text = "Robot " + (i + 1);
            robots[i].transform.Find("Name").gameObject.SetActive(!robots[i].transform.Find("Name").gameObject.activeSelf);
        }
    }

    public void ChangeCamera() { // Dependiendo de current camera, activamos y desactivamos las cámaras y canvas correspondientes además del
                                 // script de rotación de la cámara del robot
        mainCamera.transform.gameObject.SetActive(false);
        topCamera.transform.gameObject.SetActive(false);
        robotCamera.transform.gameObject.SetActive(false);
        robotCameraHandle.GetComponent<RobotCameraHandleRotator>().enabled = false;
        mainCanvas.gameObject.SetActive(false);
        topCanvas.gameObject.SetActive(false);
        robotCanvas.gameObject.SetActive(false);
        switch (currentCamera) {
            case 0:
                currentCamera = 1;
                topCamera.transform.gameObject.SetActive(true);
                topCanvas.gameObject.SetActive(true);
                break;
            case 1:
                currentCamera = 2;
                robotCamera.transform.gameObject.SetActive(true);
                robotCanvas.gameObject.SetActive(true);
                robotCameraHandle.GetComponent<RobotCameraHandleRotator>().enabled = true;
                break;
            case 2:
                currentCamera = 0;
                mainCamera.transform.gameObject.SetActive(true);
                mainCanvas.gameObject.SetActive(true);
                break;
        }
    }

    public void ChangeRobot() { // Función para actualizar el robot al que queremos espectar
        if (currentRobot + 1 >= robots.Count) {
            currentRobot = 0;
        } else if (currentRobot + 1 < 0) {
            currentRobot = robots.Count - 1;
        } else {
            currentRobot++;
        }
    }
}
