/**
* Universidad de La Laguna
* Proyecto: Roblockly
* Autor: Edwin Plasencia Hern�ndez
* Email: alu0101329888@ull.edu.es
* Fecha: 08/05/2024
* Descripci�n: ContactSensorManager: Manager del sensor de contacto que devuelve "True" o "False" si colisiona
*/

using UnityEngine;

public class ContactSensorManager : GenericSensorManager { // Mantiene una variable contact que dice si est� colisionando con algo
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
