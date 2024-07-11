/**
* Universidad de La Laguna
* Proyecto: Roblockly
* Autor: Edwin Plasencia Hernández
* Email: alu0101329888@ull.edu.es
* Fecha: 08/05/2024
* Descripción: PlatformRotator: Script simple para rotar continuamente una plataforma o poder moverla a mano con el ratón
*/

using UnityEngine;

public class PlatformRotator : MonoBehaviour {
    public float speed = 15.0f;         // Dada una velocidad
    public float sensitivity = 200.0f;  // Dada una sensibilidad
    public bool manual = false;         // Rotar con el click?

    void Start() {}

    void Update() { // Rotar la plataforma sobre su eje y
        transform.Rotate(transform.up * speed * Time.deltaTime);
    }

    public void OnMouseDrag() { // Rotar con el click
        float rotation = Input.GetAxis("Mouse X") * Mathf.Deg2Rad * sensitivity;
        transform.Rotate(transform.up, - rotation);
    }
}
