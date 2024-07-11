/**
* Universidad de La Laguna
* Proyecto: Roblockly
* Autor: Edwin Plasencia Hernández
* Email: alu0101329888@ull.edu.es
* Fecha: 08/05/2024
* Descripción: SettingsMenuManager: Manager del menú de opciones
*/

using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class SettingsMenuManager : MonoBehaviour {
    // Menú de opciones, stats y stats por desafío
    public GameObject settingsMenu;
    public GameObject statsMenu;
    public GameObject challengeStatsMenu;
    // Contenido del scroll rect del menú de stats por desafío y un botón de ejemplo para instanciar
    public GameObject challengesContent;
    public Button exampleButton;
    // Campos a modificar del menú de stats por desafío
    public Text challengeTitle;
    public Text challengeBestTime;
    public Text challengeBlockCount;

    public Text challengeBestDevTime;
    public Text challengeDevBlockCount;

    public Text challengeScore;

    void Start() { // Llamamos a la creación de botones
        SetChallengeButtons();
    }

    void Update() {}

    public void SetChallengeButtons() { // Destruye los posibles botones existentes e instancia los nuevos correspondientes a cada desafío superado
        // Destruye los botones existentes
        for (int i = 1; i < challengesContent.transform.childCount; i++) {
            Destroy(challengesContent.transform.GetChild(i).gameObject);
        }
        // Obtiene el manger de estadísticas y le pide todas las stats guardadas de todos los niveles
        StatsManager statsManager = VaultManager.vaultInstance.getObject("StatsManager").GetComponent<StatsManager>();
        Dictionary<string, Stats> stats = statsManager.getAllStats();
        int counter = 1;
        // Por cada nivel superado crea un botón, le modifica el nombre por desafío, lo coloca en el scroll rect y le modifica su evento para
        // abrir el menú de stats por desafío correspondiente con su nombre cuando se pulse por el usuario
        foreach (KeyValuePair<string, Stats> stat in stats) {
            Button newChallengeButton = Instantiate(exampleButton, Vector3.zero, Quaternion.identity);
            newChallengeButton.transform.SetParent(challengesContent.transform, false);
            newChallengeButton.gameObject.SetActive(true);
            newChallengeButton.gameObject.name = stat.Key;
            newChallengeButton.transform.GetChild(0).GetComponent<Text>().text = stat.Key;
            newChallengeButton.onClick.AddListener(() => OpenChallengeStats(newChallengeButton.transform.GetChild(0).GetComponent<Text>().text));
            counter++;
        }
    }

    public void OpenMenu() { // Abre el menú de opciones principal
        settingsMenu.SetActive(true);
    }

    public void CloseMenu() { // Cierra el menú de opciones principal
        settingsMenu.SetActive(false);
    }

    public void MainMenu() { // Vuelve al menú principal
        SceneManager.LoadScene(0);
    }

    public void LevelMenu() { // Vuelve al menú de selección de niveles
        SceneManager.LoadScene(1);
    }

    public void QuitGame() { // Cierra el juego
        Application.Quit();
    }

    public void OpenStats() { // Abre el menú de estadísticas
        statsMenu.SetActive(true);
    }

    public void CloseStats() { // Cierra el menú de estadísticas
        statsMenu.SetActive(false);
    }

    public void OpenChallengeStats(string challengeId) { // Abre el menú de estadísticas por desafío y lo construye
                                                         // sustituyendo el texto de los campos correspondientes por
                                                         // los valores de estadísticas obtenidos en el nivel
        challengeTitle.text = challengeId;
        Stats challengeStats = VaultManager.vaultInstance.getObject("StatsManager").GetComponent<StatsManager>().getStats(challengeId);
        Stats devStats = VaultManager.vaultInstance.getObject("StatsManager").GetComponent<StatsManager>().getDevStats(challengeId);
        string challengeTime = string.Format("{0:00}:{1:00}", challengeStats.bestTime[0], challengeStats.bestTime[1]);
        string devTime = string.Format("{0:00}:{1:00}", devStats.bestTime[0], devStats.bestTime[1]);
        challengeBestTime.text = challengeTime;
        challengeBestDevTime.text = devTime;
        challengeBlockCount.text = challengeStats.blockCount.ToString();
        challengeDevBlockCount.text = devStats.blockCount.ToString();
        challengeScore.text = challengeStats.score;
        challengeStatsMenu.SetActive(true);
    }

    public void CloseChallengeStats() { // Cierra el menú de estadísticas por desafío
        challengeStatsMenu.SetActive(false);
    }
}
