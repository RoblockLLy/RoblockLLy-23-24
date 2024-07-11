/**
* Universidad de La Laguna
* Proyecto: Roblockly
* Autor: Edwin Plasencia Hernández
* Email: alu0101329888@ull.edu.es
* Fecha: 13/05/2024
* Descripción: FlagBehaviour: Este script lanza un evento cuando detecta una colisión con un objeto con tag "Robot"
*/

using System;
using UnityEngine;

public class FlagBehaviour : MonoBehaviour {
    public bool timed;              // Si timed está activado significa que para ganar se debe permanecer en la bandera un tiempo preestablecido
    public float secondsForWin;     // El tiempo a permanecer en la bandera para ganar si timed = true

    private float timer;            // Timer que cuenta cuánto tiempo se está en la bandera
    private bool collision;         // Bool que comprueba cuándo el robot se encuentra en la bandera

    public event Action OnRobotWin; // Evento a lanzar al ganar

    void Start() {
        timer = 0.0f;
        collision = false;
    }

    void Update() { // Si es una bandera con timer:
                    //          Si se detecta una colisión se suma el tiempo pasado
                    //          Si el tiempo pasado es igual o mayor a los segundos para ganar se lanza el evento
                    //          Si se crea contacto y no se ha llegado a los segundos para ganar se activa el mesh del contador
                    //              En caso contrario de desactiva el mesh del contador
        if (timed && collision) {
            timer += Time.deltaTime;
            int seconds = (int)((secondsForWin - timer) % 60);
            int miliseconds = (int)(((secondsForWin - timer) * 100) % 100);
            transform.Find("Timer").GetComponent<TextMesh>().text = string.Format("{0:00}:{1:00}", seconds, miliseconds);
        }
        if (timed && timer >= secondsForWin) {
            OnRobotWin?.Invoke();
        }
        if (timed && collision && timer < secondsForWin) {
            Debug.Log(transform.Find("Timer").name);
            transform.Find("Timer").gameObject.SetActive(true);
        } else if (timed) {
            if (transform.Find("Timer") != null) {
                transform.Find("Timer").gameObject.SetActive(false);
            }
        }
    }

    private void OnTriggerEnter(Collider other) { // Cuando se detecta una colisión con un robot se lanza el evento o se activa collision
                                                  // por si la bandera tiene timer
        if (other.tag == "Robot") {
            collision = true;
            if (!timed) {
                OnRobotWin?.Invoke();
            }
        }
    }

    private void OnTriggerExit(Collider other) { // Se desactiva collision y se resetea el timer si el robot sale de la bandera
        if (other.tag == "Robot") {
            collision = false;
            timer = 0.0f;
        }
    }
}
