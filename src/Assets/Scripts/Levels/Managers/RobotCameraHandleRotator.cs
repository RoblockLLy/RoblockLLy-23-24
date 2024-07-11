/**
* Universidad de La Laguna
* Proyecto: Roblockly
* Autor: Edwin Plasencia Hern�ndez
* Email: alu0101329888@ull.edu.es
* Fecha: 13/05/2024
* Descripci�n: RobotCameraHandleRotator: Script simple para rotar la c�mara con el rat�n sobre el robot
*/

using UnityEngine;

public class RobotCameraHandleRotator : MonoBehaviour {
    public float sensitivity = 100.0f;
    public GameObject yTransformHandler;

    void Start() {}

    void Update() { // Se obtiene la posici�n en el eje x e y del rat�n y se rota la c�mara correspondientemente
        if (Input.GetMouseButton(0)) {
            float rotationX = Input.GetAxis("Mouse X") * Mathf.Deg2Rad * sensitivity;
            transform.Rotate(0, rotationX, 0);
            float rotationY = Input.GetAxis("Mouse Y") * Mathf.Deg2Rad * sensitivity;
            yTransformHandler.transform.Rotate(-rotationY, 0, 0);
        }
    }
}
