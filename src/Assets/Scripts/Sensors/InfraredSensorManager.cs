/**
* Universidad de La Laguna
* Proyecto: Roblockly
* Autor: Edwin Plasencia Hernández
* Email: alu0101329888@ull.edu.es
* Fecha: 08/05/2024
* Descripción: InfraredSensorManager: Manager del sensor de infrarojos que devuelve "True" o "False" dependiendo del color del suelo detectado
*/

using UnityEngine;
using UnityEngine.Experimental.AI;

public class InfraredSensorManager : GenericSensorManager { // Se lanza un rayo hacia abajo y se devuelve si el material es whiteMaterial "True" y si no, "False"
    public float rayRange = 100.0f;
    public Material whiteMaterial;
    public LayerMask raycastLayer;

    public override string GetReading() {
        RaycastHit hit;
        if (Physics.Raycast(transform.position, -transform.up, out hit, rayRange, raycastLayer)) {
            if (hit.transform.GetComponent<Renderer>().sharedMaterial.name == whiteMaterial.name) {
                return true.ToString();
            }
        }
        return false.ToString();
    }
}
