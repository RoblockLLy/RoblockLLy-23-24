/**
* Universidad de La Laguna
* Proyecto: Roblockly
* Autor: Edwin Plasencia Hern�ndez
* Email: alu0101329888@ull.edu.es
* Fecha: 29/05/2024
* Descripci�n: PressurePlateInteractable: Clase para un objeto de tipo placa de presi�n
*/

using UnityEngine;

public class PressurePlateInteractable : ActiveInteractable {
    public GameObject button;
    public Material pressedMaterial;
    public Material unpressedMaterial;

    void OnTriggerEnter(Collider other) {
        if (other.tag == "Robot") {
            ActivateInteractables();
            DeactivateInteractables();
            ToggleInteractables();
            ActivateHoldInteractables();
            button.GetComponent<Renderer>().material = pressedMaterial;
        }
    }

    void OnTriggerExit(Collider other) {
        if (other.tag == "Robot") {
            DeactivateHoldInteractables();
            button.GetComponent<Renderer>().material = unpressedMaterial;
        }
    }
}
