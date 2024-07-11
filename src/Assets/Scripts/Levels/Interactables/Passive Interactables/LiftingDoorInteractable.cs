/**
* Universidad de La Laguna
* Proyecto: Roblockly
* Autor: Edwin Plasencia Hernández
* Email: alu0101329888@ull.edu.es
* Fecha: 29/05/2024
* Descripción: LiftingDoorInteractable: Clase para un objeto de tipo puerta de apertura vertical
*/

using UnityEngine;

public class LiftingDoorInteractable : PassiveInteractable {
    public GameObject door;
    public Material doorMaterial;

    public float openHeight;
    public float openSpeed;

    private bool activated = false;
    private float originalYPos;

    void Start() {
        if (GameObject.FindGameObjectWithTag("Level Manager") != null) {
            GameObject.FindGameObjectWithTag("Level Manager").GetComponent<LevelManager>().OnReset += ResetInteractable;
        }
        originalYPos = transform.position.y;
    }

    void Update() { 
        if (activated) {
            float nextYPos = Mathf.Lerp(transform.position.y, originalYPos + openHeight, openSpeed * Time.deltaTime);
            transform.position = new Vector3(transform.position.x, nextYPos, transform.position.z);
        } else {
            float nextYPos = Mathf.Lerp(transform.position.y, originalYPos, openSpeed * Time.deltaTime);
            transform.position = new Vector3(transform.position.x, nextYPos, transform.position.z);
        }
    }

    public override void ActivateInteractable() {
        activated = true;
    }

    public override void DeactivateInteractable() {
        activated = false;
    }

    public override void ToggleInteractable() {
        activated = !activated;
    }

    public override void ResetInteractable() {
        activated = false;
        transform.position = new Vector3(transform.position.x, originalYPos, transform.position.z);
    }
}
