/**
* Universidad de La Laguna
* Proyecto: Roblockly
* Autor: Edwin Plasencia Hernández
* Email: alu0101329888@ull.edu.es
* Fecha: 08/05/2024
* Descripción: StatsManager: Manager de las estadísticas de juego, guarda y compara
*                            los récords a los almacenados y los de los devs.
*/

using System.Collections.Generic;
using UnityEngine;

public struct Stats { // Struct simple para almacenar los resultados de un intento
    public List<int> bestTime;
    public int blockCount;
    public string score;

    public Stats(List<int> time, int blocks, string sc) {
        bestTime = time;
        blockCount = blocks;
        score = sc;
    }
}

public class StatsManager : MonoBehaviour {
    private Dictionary<string, Stats> stats = new Dictionary<string, Stats>();    // Lista de stats por desafío
    private Dictionary<string, Stats> devStats = new Dictionary<string, Stats>(); // Lista de stats de los devs a vencer :)

    void Start() { // Vuelve persistente entre escenas a la clase y accesible a través del vault
        if (!VaultManager.vaultInstance.checkForObject(gameObject.name)) {
            VaultManager.vaultInstance.addObject(gameObject);
        } else { // O se elimina a si misma si ya hay un StatsManager en la escena
            Destroy(gameObject);
        }
    }

    void Update() {}

    public void addStats(string levelName, Stats stat) { // Añade o actualiza un récord si es mejor
        if (stats.ContainsKey(levelName)) {
            if (stat.bestTime[0] < stats[levelName].bestTime[0] || (stat.bestTime[0] == stats[levelName].bestTime[0] && stat.bestTime[1] < stats[levelName].bestTime[1])) {
                stats[levelName] = stat;
            }
        } else {
            stats.Add(levelName, stat);
        }
    }

    public void addDevStats(string levelName, Stats stat) { // Añade (o actualiza?) un récord de dev a vencer (si es mejor)
        if (devStats.ContainsKey(levelName)) {
            if (stat.bestTime[0] < devStats[levelName].bestTime[0] || (stat.bestTime[0] == devStats[levelName].bestTime[0] && stat.bestTime[1] < devStats[levelName].bestTime[1])) {
                devStats[levelName] = stat;
            }
        } else {
            devStats.Add(levelName, stat);
        }
    }

    public Stats getStats(string levelName) { // Devuelve las stats o récord obtenido en un nivel
        return stats[levelName];
    }

    public Stats getDevStats(string levelName) { // Devuelve las stats o récord a vencer de un nivel
        return devStats[levelName];
    }

    public Dictionary<string, Stats> getAllStats() { // Devuelve todas las stats o récords de todos los niveles
        return stats;
    }
}
