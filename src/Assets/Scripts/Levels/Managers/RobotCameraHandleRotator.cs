/**
* Universidad de La Laguna
* Proyecto: Roblockly
* Autor: Edwin Plasencia Hernández
* Email: alu0101329888@ull.edu.es
* Fecha: 13/05/2024
* Descripción: RobotCameraHandleRotator: Script simple para rotar la cámara con el ratón sobre el robot
*/

using UnityEngine;

public class RobotCameraHandleRotator : MonoBehaviour {
    public float sensitivity = 100.0f;
    public GameObject yTransformHandler;

    void Start() {}

    void Update() { // Se obtiene la posición en el eje x e y del ratón y se rota la cámara correspondientemente
        if (Input.GetMouseButton(0)) {
            float rotationX = Input.GetAxis("Mouse X") * Mathf.Deg2Rad * sensitivity;
            transform.Rotate(0, rotationX, 0);
            float rotationY = Input.GetAxis("Mouse Y") * Mathf.Deg2Rad * sensitivity;
            yTransformHandler.transform.Rotate(-rotationY, 0, 0);
        }
    }
}
