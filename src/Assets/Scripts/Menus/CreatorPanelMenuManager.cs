
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class CreatorPanelMenuManager : MonoBehaviour {

    public InputField xDimension;
    public InputField yDimension;
    public TMP_InputField codeInput;

    void Start() { }

    void Update() { }

    public void LoadScene(int sceneName) {
        SceneManager.LoadScene(sceneName);
    }

    public void GoBack() { // Vuelve a la escena anterior
        SceneManager.LoadScene(1);
    }

    public void LoadFromDimension() {
        PlayerPrefs.SetInt("xSize", int.Parse(xDimension.text));
        PlayerPrefs.SetInt("ySize", int.Parse(yDimension.text));
        SceneManager.LoadScene(4);
    }

    public void LoadFromCode() {
        PlayerPrefs.SetString("Code", codeInput.text);
        SceneManager.LoadScene(4);
    }
}
