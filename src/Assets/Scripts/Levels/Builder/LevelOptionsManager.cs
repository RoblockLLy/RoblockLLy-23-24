using System.Collections;
using System.Collections.Generic;
using System.Linq;
using TMPro;
using UnityEditor;
using UnityEngine;
using UnityEngine.UI;

public class LevelOptionsManager : MonoBehaviour {

    public GameObject builderColliders;
    public GameObject exampleDropdown;
    public GameObject exampleInput;
    public GameObject levelConfigPanelContent;

    public List<Material> skyboxes;
    private Material currentSkybox;
    private string levelName = string.Empty;
    private string devMinTime = string.Empty;
    private string devSecTime = string.Empty;
    private string devBlocksUsed = string.Empty;

    void Start() {
        currentSkybox = skyboxes[0];
        SetLevelOptionsPanel();
    }

    void Update() {
        
    }

    public void DisableColliders() {
        builderColliders.SetActive(false);
    }

    public void EnableColliders() {
        builderColliders.SetActive(true);
    }

    public Material GetCurrentSkybox() {
        return currentSkybox;
    }

    public string GetLevelName() {
        return levelName;
    }

    public string GetDevMinutes() {
        return devMinTime;
    }

    public string GetDevSeconds() {
        return devSecTime;
    }

    public string GetDevBlocks() {
        return devBlocksUsed;
    }

    private void SetLevelOptionsPanel() {
        GameObject skyboxDropdown = Instantiate(exampleDropdown);
        skyboxDropdown.name = "Skybox";
        skyboxDropdown.transform.GetChild(1).GetComponent<Text>().text = "Skybox";
        skyboxDropdown.transform.SetParent(levelConfigPanelContent.transform);
        skyboxDropdown.transform.localScale = Vector3.one;
        skyboxDropdown.GetComponent<RectTransform>().anchoredPosition3D = Vector3.zero;
        skyboxDropdown.transform.localRotation = Quaternion.Euler(0, 0, 0);

        List<string> skyboxesNames = new List<string>();
        foreach (Material skybox in skyboxes) {
            skyboxesNames.Add(skybox.name);
        }
        skyboxDropdown.GetComponent<TMP_Dropdown>().AddOptions(skyboxesNames);

        GameObject nameInput = Instantiate(exampleInput);
        nameInput.name = "Level name";
        nameInput.transform.GetChild(1).GetComponent<Text>().text = "Level name";
        nameInput.transform.SetParent(levelConfigPanelContent.transform);
        nameInput.transform.localScale = Vector3.one;
        nameInput.GetComponent<RectTransform>().anchoredPosition3D = Vector3.zero;
        nameInput.transform.localRotation = Quaternion.Euler(0, 0, 0);

        GameObject minInput = Instantiate(exampleInput);
        minInput.name = "Dev minutes";
        minInput.transform.GetChild(1).GetComponent<Text>().text = "Dev minutes";
        minInput.transform.SetParent(levelConfigPanelContent.transform);
        minInput.transform.localScale = Vector3.one;
        minInput.GetComponent<RectTransform>().anchoredPosition3D = Vector3.zero;
        minInput.transform.localRotation = Quaternion.Euler(0, 0, 0);

        GameObject secInput = Instantiate(exampleInput);
        secInput.name = "Dev seconds";
        secInput.transform.GetChild(1).GetComponent<Text>().text = "Dev seconds";
        secInput.transform.SetParent(levelConfigPanelContent.transform);
        secInput.transform.localScale = Vector3.one;
        secInput.GetComponent<RectTransform>().anchoredPosition3D = Vector3.zero;
        secInput.transform.localRotation = Quaternion.Euler(0, 0, 0);

        GameObject blocksInput = Instantiate(exampleInput);
        blocksInput.name = "Dev blocks used";
        blocksInput.transform.GetChild(1).GetComponent<Text>().text = "Dev blocks used";
        blocksInput.transform.SetParent(levelConfigPanelContent.transform);
        blocksInput.transform.localScale = Vector3.one;
        blocksInput.GetComponent<RectTransform>().anchoredPosition3D = Vector3.zero;
        blocksInput.transform.localRotation = Quaternion.Euler(0, 0, 0);

        skyboxDropdown.SetActive(true);
        nameInput.SetActive(true);
        minInput.SetActive(true);
        secInput.SetActive(true);
        blocksInput.SetActive(true);
    }

    public void DropdownChanged(GameObject dropdown) {
        if (dropdown.name == "Skybox") {
            RenderSettings.skybox = skyboxes[dropdown.GetComponent<TMP_Dropdown>().value];
            currentSkybox = skyboxes[dropdown.GetComponent<TMP_Dropdown>().value];
        }
    }

    public void InputChanged(GameObject input) {
        if (input.name == "Level name") {
            levelName = input.GetComponent<InputField>().text;
        } else if (input.name == "Dev minutes") {
            devMinTime = input.GetComponent<InputField>().text;
        } else if (input.name == "Dev seconds") {
            devSecTime = input.GetComponent<InputField>().text;
        } else if (input.name == "Dev blocks used") {
            devBlocksUsed = input.GetComponent<InputField>().text;
        }
    }

    public void SetSkybox(string skyboxName) {
        if (skyboxes.Any(skybox => skybox.name == skyboxName)) {
            RenderSettings.skybox = skyboxes.Find(skybox => skybox.name == skyboxName);
            currentSkybox = skyboxes.Find(skybox => skybox.name == skyboxName);
            GameObject.Find("Skybox").GetComponent<TMP_Dropdown>().value = GameObject.Find("Skybox").GetComponent<TMP_Dropdown>().options.FindIndex(option => option.text == skyboxName);
        }
    }

    public void SetDevTimes(string minutes, string seconds, string blocks) {
        devMinTime = minutes;
        devSecTime = seconds;
        devBlocksUsed = blocks;
        GameObject.Find("Dev minutes").GetComponent<InputField>().text = minutes;
        GameObject.Find("Dev seconds").GetComponent<InputField>().text = seconds;
        GameObject.Find("Dev blocks used").GetComponent<InputField>().text = blocks;
    }

    public void SetLevelName(string level_name) {
        levelName = level_name;
        GameObject.Find("Level name").GetComponent<InputField>().text = levelName;
    }
}
