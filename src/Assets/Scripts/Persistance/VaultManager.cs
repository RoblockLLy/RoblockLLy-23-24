/**
* Universidad de La Laguna
* Proyecto: Roblockly
* Autor: Edwin Plasencia Hernández
* Email: alu0101329888@ull.edu.es
* Fecha: 08/05/2024
* Descripción: VaultManager: Manager del vault, una clase persistente entre escenas que almacena de
*                            forma ordenada objetos que también deben permanecer entre escenas.
*/

using System.Collections.Generic;
using UnityEngine;

public class VaultManager : MonoBehaviour {
    public static VaultManager vaultInstance;                                     // Elemento estático accesible por cualquier script
    private static List<GameObject> persistanceRequired = new List<GameObject>(); // Lista de objetos persistentes y accesibles

    void Awake() { // Vuelve persistente a la propia clase
        if (vaultInstance == null) {
            vaultInstance = this;
            DontDestroyOnLoad(gameObject);
        } else { // O se destruye a si misma si ya hay un VaultManager en la escena
            Destroy(gameObject);
        }
    }

    void Update() {}

    public void addObject(GameObject obj) { // Añade a la lista y vuelve persistente entre escenas a un objeto
        persistanceRequired.Add(obj);
        DontDestroyOnLoad(obj);
    }

    public GameObject getObject(string name) { // Devuelve la referencia a un objeto almacenado en la lista de persistentes
        foreach (GameObject obj in persistanceRequired) {
            if (obj.name == name) {
                return obj;
            }
        }
        return null;
    }

    public void removeObject(string objectName) { // Elimina de la lista de persistentes y destruye un objeto
        for (int i = 0; i < persistanceRequired.Count; i++) {
            if (persistanceRequired[i].name == objectName) {
                Destroy(persistanceRequired[i]);
                persistanceRequired.RemoveAt(i);
            }
        }
    }

    public bool checkForObject(string objectName) { // Comprueba que en la lista exista un objeto determinado persistente
        for (int i = 0; i < persistanceRequired.Count; i++) {
            if (persistanceRequired[i].name == objectName) {
                return true;
            }
        }
        return false;
    }
}
