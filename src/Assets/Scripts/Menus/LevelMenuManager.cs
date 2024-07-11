/**
* Universidad de La Laguna
* Proyecto: Roblockly
* Autor: Edwin Plasencia Hernández
* Email: alu0101329888@ull.edu.es
* Fecha: 09/05/2024
* Descripción: LevelMenuManager: Manager del menú de selección de niveles
*/

using UnityEngine;
using UnityEngine.SceneManagement;

public class LevelMenuManager : MonoBehaviour {
    const int MAX_ROBOT_COUNT = 10;

    void Start() {
        PlayerPrefs.SetInt("Robot count", 0);
        for (int i = 0; i < MAX_ROBOT_COUNT; i++) {
            VaultManager.vaultInstance.removeObject("Robot " + (i + 1));
        }
        PlayerPrefs.SetString("Code", "");
    }

    void Update() {}

    public void SetRobotCount(int robotCount) { // Dado una cantidad de robots, establece el número de robots a usar
        PlayerPrefs.SetInt("Robot count", robotCount);
    }

    public void LoadLevel(int sceneName) { // Dado el nombre de un nivel establece el nivel y pasa de escena
        PlayerPrefs.SetInt("Level", sceneName);
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
    }

    public void LoadScene(int sceneName) {
        SceneManager.LoadScene(sceneName);
    }

    public void GoBack() { // Vuelve a la escena anterior
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex - 1);
    }
}
