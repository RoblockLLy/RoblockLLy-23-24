/**
* Universidad de La Laguna
* Proyecto: Roblockly
* Autor: Edwin Plasencia Hernández
* Email: alu0101329888@ull.edu.es
* Fecha: 29/05/2024
* Descripción: ElevatorInteractable: Clase para un objeto de tipo ascensor
*/

using UnityEngine;

public class ElevatorInteractable : PassiveInteractable {
    public GameObject platform;
    public Material platformMaterial;

    public int floorCount;
    public float floorDistance;
    public float liftSpeed;
    public bool vertical;

    private int currentFloor = 0;
    private string toggleDirection = "up";
    private Vector3 originalPos;

    void Start() {
        if (GameObject.FindGameObjectWithTag("Level Manager") != null) {
            GameObject.FindGameObjectWithTag("Level Manager").GetComponent<LevelManager>().OnReset += ResetInteractable;
        }
        originalPos = transform.position;
        floorDistance = floorDistance * transform.localScale.z * 10;
    }

    void Update() {
        Vector3 floorPos = originalPos + (transform.forward * floorDistance * currentFloor);
        if (vertical) {
            if (Vector3.Distance(floorPos, transform.position) < 0.5f) {
                transform.position = floorPos;
            } else if ((floorPos - transform.position).normalized == transform.up) {
                transform.Translate(transform.up * liftSpeed * Time.deltaTime);
            } else {
                transform.Translate(-transform.up * liftSpeed * Time.deltaTime);
            }
        } else {
            if (Vector3.Distance(floorPos, transform.position) < 0.5f) {
                transform.position = floorPos;
            } else {
                transform.Translate((floorPos - transform.position).normalized * liftSpeed * Time.deltaTime, Space.World);
            }
        }
    }

    public override void ActivateInteractable() {
        if (currentFloor < floorCount - 1) {
            currentFloor += 1;
        }
    }

    public override void DeactivateInteractable() {
        if (currentFloor > 0) {
            currentFloor -= 1;
        }
    }

    public override void ToggleInteractable() {
        if (toggleDirection == "up") {
            currentFloor++;
            if (currentFloor == floorCount - 1) {
                toggleDirection = "down";
            }
        } else {
            currentFloor--;
            if (currentFloor == 0) {
                toggleDirection = "up";
            }
        }
    }

    public override void ResetInteractable() {
        currentFloor = 0;
        transform.position = originalPos;
    }
}
