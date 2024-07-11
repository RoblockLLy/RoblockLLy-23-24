/**
* Universidad de La Laguna
* Proyecto: Roblockly
* Autor: Edwin Plasencia Hern�ndez
* Email: alu0101329888@ull.edu.es
* Fecha: 08/05/2024
* Descripci�n: UltrasoundSensorManager: Manager del sensor de ultrasonido que devuelve la distancia a la pared a la que apunta
*/

using UnityEngine;

public class UltrasoundSensorManager : GenericSensorManager { // Lanza un rayo hacia delante y devuelve la distancia de colisi�n con el objeto m�s pr�ximo
    public float rayRange = 1000.0f;
    public LayerMask raycastLayer;

    public override string GetReading() {
        RaycastHit hit;
        if (Physics.Raycast(transform.position, -transform.forward, out hit, rayRange, raycastLayer)) {
            return hit.distance.ToString();
        }
        return rayRange.ToString();
    }
}
