/**
* Universidad de La Laguna
* Proyecto: Roblockly
* Autor: Edwin Plasencia Hernández
* Email: alu0101329888@ull.edu.es
* Fecha: 08/05/2024
* Descripción: GyroscopeSensorManager: Manager del sensor de giroscopio que devuelve la inclinación del robot
*/

using UnityEngine;

public class GyroscopeSensorManager : GenericSensorManager {
    public const float MAX_ANGLE = 5.0f;

    public override string GetReading() { // Se obtiene la inclinación del robot en el eje x del mismo
        float xAngle = Quaternion.Angle(transform.rotation, Quaternion.Euler(0, transform.rotation.eulerAngles.y, 0));

        if (xAngle > MAX_ANGLE) { // Si el ángulo supera MAX_ANGLE se entiende como inclinación suficiente para avisar al robot
            return transform.forward.y > 0 ? "forward" : "backwards";
        } else {
            return "still";
        }
    }
}
