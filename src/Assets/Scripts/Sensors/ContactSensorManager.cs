/**
* Universidad de La Laguna
* Proyecto: Roblockly
* Autor: Edwin Plasencia Hernández
* Email: alu0101329888@ull.edu.es
* Fecha: 08/05/2024
* Descripción: ContactSensorManager: Manager del sensor de contacto que devuelve "True" o "False" si colisiona
*/

using UnityEngine;

public class ContactSensorManager : GenericSensorManager { // Mantiene una variable contact que dice si está colisionando con algo
    private bool contact = false;

    public override string GetReading() { // Devuelve el valor de contact
        return contact.ToString();
    }

    void OnTriggerEnter(Collider other) { // Si colisiona con algo pone contact a true
        contact = true;
    }

    void OnTriggerExit(Collider other) { // Si deja de colisionar con algo pone contact a false
        contact = false;
    }
}
