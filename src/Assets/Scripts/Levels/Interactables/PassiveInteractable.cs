/**
* Universidad de La Laguna
* Proyecto: Roblockly
* Autor: Edwin Plasencia Hernández
* Email: alu0101329888@ull.edu.es
* Fecha: 29/05/2024
* Descripción: PassiveInteractable: Clase genérica para objetos interactuables pasivos (puertas, ascensores...)
*/

using UnityEngine;

public abstract class PassiveInteractable : MonoBehaviour {

    void Start() {
        GameObject.FindGameObjectWithTag("Level Manager").GetComponent<LevelManager>().OnReset += ResetInteractable;
    }

    void Update() { }

    public abstract void ActivateInteractable();
    public abstract void DeactivateInteractable();
    public abstract void ToggleInteractable();

    public abstract void ResetInteractable();
}
