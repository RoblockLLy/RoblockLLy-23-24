/**
* Universidad de La Laguna
* Proyecto: Roblockly
* Autor: Edwin Plasencia Hernández
* Email: alu0101329888@ull.edu.es
* Fecha: 29/05/2024
* Descripción: ActiveInteractable: Clase genérica para objetos interactuables activos (botones, placas de presión...)
*/

using System.Collections.Generic;
using UnityEngine;

public abstract class ActiveInteractable : MonoBehaviour {
    public List<GameObject> activateableInteractables;
    public List<GameObject> deactivateableInteractables;
    public List<GameObject> toggleableInteractables;
    public List<GameObject> holdableInteractables;

    void Start() { }

    void Update() { }

    protected void ActivateInteractables() {
        if (activateableInteractables != null) {
            foreach (GameObject interactable in activateableInteractables) {
                interactable.GetComponent<PassiveInteractable>().ActivateInteractable();
            }
        }
    }

    protected void DeactivateInteractables() {
        if (deactivateableInteractables != null) {
            foreach (GameObject interactable in deactivateableInteractables) {
                interactable.GetComponent<PassiveInteractable>().DeactivateInteractable();
            }
        }
    }

    protected void ToggleInteractables() {
        if (toggleableInteractables != null) {
            foreach (GameObject interactable in toggleableInteractables) {
                interactable.GetComponent<PassiveInteractable>().ToggleInteractable();
            }
        }
    }

    protected void ActivateHoldInteractables() {
        if (holdableInteractables != null) {
            foreach (GameObject interactable in holdableInteractables) {
                interactable.GetComponent<PassiveInteractable>().ActivateInteractable();
            }
        }
    }

    protected void DeactivateHoldInteractables() {
        if (holdableInteractables != null) {
            foreach (GameObject interactable in holdableInteractables) {
                interactable.GetComponent<PassiveInteractable>().DeactivateInteractable();
            }
        }
    }

    public void AddActivateableInteractable(GameObject obj) {
        activateableInteractables.Add(obj);
    }

    public void AddDeactivateableInteractable(GameObject obj) {
        deactivateableInteractables.Add(obj);
    }

    public void AddHoldableInteractable(GameObject obj) {
        holdableInteractables.Add(obj);
    }

    public void AddToggleabeInteractable(GameObject obj) {
        toggleableInteractables.Add(obj);
    }

    public void ClearInteractables() {
        activateableInteractables.Clear();
        deactivateableInteractables.Clear();
        holdableInteractables.Clear();
        toggleableInteractables.Clear();
    }
}
