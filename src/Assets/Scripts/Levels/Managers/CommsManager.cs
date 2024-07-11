/**
* Universidad de La Laguna
* Proyecto: Roblockly
* Autor: Edwin Plasencia Hern�ndez
* Email: alu0101329888@ull.edu.es
* Fecha: 20/05/2024
* Descripci�n: CommsManager: Manager del sistema de comunicaciones principal, se encarga de adjudicar
*                            robots a los grupos de colores correspondientes y manejar las se�ales as�
*                            como activar las luces de los robots y cambiar los colores de cada una seg�n grupo.
*/

using System.Collections.Generic;
using UnityEngine;

public enum SignalType { // Enum para especificar el tipo de se�al
    Broadcast,
    Group,
    Robot
}

public struct Signal { // Struct simple para definir una se�al, tiene un nombre, un tipo de se�al, un remitente y un receptor que
                       // puede ser el robot al que es enviado, el grupo al que es enviado o null si es un broadcast.
    public string name;
    public SignalType type;
    public string from;
    public string to;

    public Signal(string signalName, SignalType signalType, string sender, string recipient = null) {
        name = signalName;
        type = signalType;
        from = sender;
        to = recipient;
    }
}

public class CommsManager : MonoBehaviour { // Clase principal que maneja las se�ales y grupos
    public LevelManager levelManager; // Level manager para obtener los robots de manera m�s sencilla

    private List<Signal> signalStack = new List<Signal>(); // Stack (aunque es una lista para mejor acceso) con todas las se�ales enviadas
    private Dictionary<string, string> robotGrouping = new Dictionary<string, string>(); // Diccionario con todas las asignaciones de robots y grupos
    public List<Material> groupMaterials; // Materiales para cada grupo de color para establecer como material de la bombilla de los robots
    
    public static CommsManager commsManager; // Instancia est�tica de la clase para poder ser accedida desde los scripts de Comms de ublockly

    void Start() { // Obtenemos los robots y los a�adimos al diccionario sin un grupo definido
        List<GameObject> robots = levelManager.GetRobots();
        for (int i = 0;  i < robots.Count; i++) {
            robotGrouping.Add("Robot " + (i + 1), null);
        }
        commsManager = this; // La instancia est�tica ser� esta clase
    }

    void Update() {}

    public void SetGroup(string robot, string group) { // Dado un robot y un grupo:
        // Eliminamos la entrada del robot
        robotGrouping.Remove(robot);
        // A�adimos una nueva entrada con el robot y su nuevo grupo
        robotGrouping.Add(robot, group);
        // Obtenemos la lista de robots
        List<GameObject> robots = levelManager.GetRobots();
        // Buscamos el robot y activamos su bombilla, cambiamos el material de la bombilla y cambiamos los colores de las luces
        foreach (GameObject rob in robots) {
            if (rob.name == robot) {
                rob.transform.Find("Group Light").gameObject.SetActive(true);
                foreach (Material light in groupMaterials) {
                    if (light.name == group) {
                        rob.transform.Find("Group Light").Find("Capsule").GetComponent<Renderer>().material = light;
                        Color groupColor;
                        // Esta siguiente instrucci�n convierte el nombre del grupo, que deber�a ser un color en formato hexadecimal, en una clase
                        // Color de Unity para poder usarla para cambiar el color de las luces de la bombilla
                        ColorUtility.TryParseHtmlString(group, out groupColor);
                        rob.transform.Find("Group Light").Find("Colored Lights").Find("Left Colored Light").GetComponent<Light>().color = groupColor;
                        rob.transform.Find("Group Light").Find("Colored Lights").Find("Right Colored Light").GetComponent<Light>().color = groupColor;
                    }
                }
            }
        }
    }

    public void ClearGroups() { // Elimina todas las agrupaciones de los robots y desactiva las bombillas
        robotGrouping.Clear();
        List<GameObject> robots = levelManager.GetRobots();
        for (int i = 0; i < robots.Count; i++) {
            robotGrouping.Add("Robot " + (i + 1), null);
        }
        foreach (GameObject rob in robots) {
            rob.transform.Find("Group Light").gameObject.SetActive(false);
        }
    }

    public void AddSignal(Signal signal) { // A�ade una se�al al stack
        signalStack.Add(signal);
    }

    public bool ReceivedBroadcastSignal(string signalName, string recipient) { // Devuelve true o false si se ha encontrado en el stack una se�al a un robot
        foreach (Signal signal in signalStack) {
            if (signal.name == signalName && (signal.to == recipient || signal.to == robotGrouping[recipient] || signal.type == SignalType.Broadcast)) {
                return true;
            }
        }
        return false;
    }

    public bool ReceivedGroupSignal(string signalName, string recipient) { // Devuelve true o false si se ha encontrado en el stack una se�al dirigida al grupo de un robot
        foreach (Signal signal in signalStack) {
            if (signal.name == signalName && signal.type == SignalType.Group && signal.to == robotGrouping[recipient]) {
                return true;
            }
        }
        return false;
    }

    public bool ReceivedRobotSignal(string signalName, string sender, string recipient) { // Devuelve true o false si se ha encontrado en el stack una se�al dirigida a un robot por un robot en especifico
        foreach (Signal signal in signalStack) {
            if (signal.name == signalName && signal.from == sender && (signal.to == recipient || signal.to == robotGrouping[recipient])) {
                return true;
            }
        }
        return false;
    }

    public void RemoveRecentSignal() { // Elimina la se�al m�s reciente del stack
        signalStack.RemoveAt(signalStack.Count - 1);
    }

    public void RemoveAllSignals() { // Limpia el stack de se�ales
        signalStack.Clear();
    }

    public void RemoveRecentSignalRobot(string robot) { // Elimina la se�al m�s reciente recibida por robot
        int counter = 0;
        bool found = false;
        for (int i = 0; i < signalStack.Count; i++) {
            if (signalStack[i].to == robot && signalStack[i].type == SignalType.Robot) {
                counter = i;
                found = true;
            }
        }
        if (found) {
            signalStack.RemoveAt(counter);
        }
    }

    public void RemoveAllSignalsRobot(string robot) { // Elimina todas las se�ales recibidas por un robot
        for (int i = 0; i < signalStack.Count; i++) {
            if (signalStack[i].to == robot && signalStack[i].type == SignalType.Robot) {
                signalStack.RemoveAt(i);
                i--;
            }
        }
    }

    public void RemoveRecentSignalGroup(string group) { // Elimina la se�al m�s reciente recibida por un grupo
        int counter = 0;
        bool found = false;
        for (int i = 0; i < signalStack.Count; i++) {
            if (signalStack[i].to == group && signalStack[i].type == SignalType.Group) {
                counter = i;
                found = true;
            }
        }
        if (found) {
            signalStack.RemoveAt(counter);
        }
    }

    public void RemoveAllSignalsGroup(string group) { // Elimina todas las se�ales recibidas por un grupo
        for (int i = 0; i < signalStack.Count; i++) {
            if (signalStack[i].to == group && signalStack[i].type == SignalType.Group) {
                signalStack.RemoveAt(i);
                i--;
            }
        }
    }
}
