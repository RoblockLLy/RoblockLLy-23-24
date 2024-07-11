using Newtonsoft.Json.Linq;
using Newtonsoft.Json;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class LoaderPanelMenuManager : MonoBehaviour {
    public InputField codeInput;

    void Start() {
        
    }

    void Update() {
        
    }

    public void LoadFromCode() {
        JObject level;
        try {
            level = JObject.Parse(codeInput.text);
        }
        catch (JsonReaderException e) {
            Debug.LogException(e);
            return;
        }
        PlayerPrefs.SetString("Code", codeInput.text);
        PlayerPrefs.SetInt("Robot count", (level["spawnpoints"] as JArray).Count);
        PlayerPrefs.SetInt("Level", 6);
        SceneManager.LoadScene(2);
    }

    public void GoBack() {
        SceneManager.LoadScene(1);
    }
}
