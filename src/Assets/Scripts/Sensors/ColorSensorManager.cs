/**
* Universidad de La Laguna
* Proyecto: Roblockly
* Autor: Edwin Plasencia Hernández
* Email: alu0101329888@ull.edu.es
* Fecha: 08/05/2024
* Descripción: ColorSensorManager: Manager del sensor de color que devuelve el nombre del material que detecta (el color)
*/

using UnityEngine;

public class ColorSensorManager : GenericSensorManager { // Se lanza un rayo hacia abajo y se devuelve el nombre del material del objeto colisionado
    public float rayRange = 100.0f;
    public LayerMask raycastLayer;

    public override string GetReading() {
        RaycastHit hit;
        if (Physics.Raycast(transform.position, -transform.up, out hit, rayRange, raycastLayer)) {
            return hit.transform.GetComponent<Renderer>().sharedMaterial.name;
        }
        return null;
    }
}
