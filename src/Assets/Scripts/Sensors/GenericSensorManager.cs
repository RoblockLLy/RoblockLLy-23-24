/**
* Universidad de La Laguna
* Proyecto: Roblockly
* Autor: Edwin Plasencia Hernández
* Email: alu0101329888@ull.edu.es
* Fecha: 08/05/2024
* Descripción: GenericSensorManager: Clase abstracta para definir sensores, contiene la función GetReading que devuelve
*                                    el valor de lectura del sensor instanciado y GetName para devolver el tipo de sensor ("Contact", "Ultrasound", ...).
*/

using UnityEngine;

public abstract class GenericSensorManager : MonoBehaviour {
    public string sensorName;

    void Start() {}

    void Update() {}

    public abstract string GetReading();

    public string GetName() {
        return sensorName;
    }
}
