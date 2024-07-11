/**
* Universidad de La Laguna
* Proyecto: Roblockly
* Autor: Edwin Plasencia Hern�ndez
* Email: alu0101329888@ull.edu.es
* Fecha: 08/05/2024
* Descripci�n: GyroscopeSensorManager: Manager del sensor de giroscopio que devuelve la inclinaci�n del robot
*/

using UnityEngine;

public class GyroscopeSensorManager : GenericSensorManager {
    public const float MAX_ANGLE = 5.0f;

    public override string GetReading() { // Se obtiene la inclinaci�n del robot en el eje x del mismo
        float xAngle = Quaternion.Angle(transform.rotation, Quaternion.Euler(0, transform.rotation.eulerAngles.y, 0));

        if (xAngle > MAX_ANGLE) { // Si el �ngulo supera MAX_ANGLE se entiende como inclinaci�n suficiente para avisar al robot
            return transform.forward.y > 0 ? "forward" : "backwards";
        } else {
            return "still";
        }
    }
}
