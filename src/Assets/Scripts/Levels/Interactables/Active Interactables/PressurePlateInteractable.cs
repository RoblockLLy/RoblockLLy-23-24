/**
* Universidad de La Laguna
* Proyecto: Roblockly
* Autor: Edwin Plasencia Hernández
* Email: alu0101329888@ull.edu.es
* Fecha: 29/05/2024
* Descripción: PressurePlateInteractable: Clase para un objeto de tipo placa de presión
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
