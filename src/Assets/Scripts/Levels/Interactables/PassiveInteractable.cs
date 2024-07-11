/**
* Universidad de La Laguna
* Proyecto: Roblockly
* Autor: Edwin Plasencia Hern�ndez
* Email: alu0101329888@ull.edu.es
* Fecha: 29/05/2024
* Descripci�n: PassiveInteractable: Clase gen�rica para objetos interactuables pasivos (puertas, ascensores...)
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
