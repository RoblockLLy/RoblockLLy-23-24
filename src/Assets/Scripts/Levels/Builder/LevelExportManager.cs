using Newtonsoft.Json;
using Newtonsoft.Json.Linq;
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LevelExportManager : MonoBehaviour {

    public GameObject exportPanel;
    public InputField exportText;
    public LevelOptionsManager optionsManager;
    public GameObject levelBuild;

    void Start() {
        
    }

    void Update() {
        
    }

    public void CloseExportPanel() {
        exportPanel.SetActive(false);
    }

    public void ExportLevel() {
        exportPanel.SetActive(true);
        JObject environment = new JObject {
            { "skybox", optionsManager.GetCurrentSkybox().name },
            { "level_name", optionsManager.GetLevelName() },
            { "dev_minutes", optionsManager.GetDevMinutes() },
            { "dev_seconds", optionsManager.GetDevSeconds() },
            { "dev_blocks", optionsManager.GetDevBlocks() }
        };
        JObject result = new JObject() {
            { "environment", environment }
        };

        JArray flags = new JArray();
        JArray spawnpoints = new JArray();
        JArray export = new JArray();
        for (int i = 0; i < levelBuild.transform.childCount; i++) {
            JObject json = new JObject();
            if (levelBuild.transform.GetChild(i).TryGetComponent<GenericBlock>(out GenericBlock testComponent)) {
                if (levelBuild.transform.GetChild(i).name.Contains("Flag")) {
                    flags.Add(levelBuild.transform.GetChild(i).GetComponent<GenericBlock>().GetJson());
                } else if (levelBuild.transform.GetChild(i).name.Contains("Spawnpoint")) {
                    spawnpoints.Add(levelBuild.transform.GetChild(i).GetComponent<GenericBlock>().GetJson());
                } else {
                    json = levelBuild.transform.GetChild(i).GetComponent<GenericBlock>().GetJson();
                }
            } else {
                json["name"] = levelBuild.transform.name;
            }
            if (json.Count > 0) {
                export.Add(json);
            }
        }
        result["spawnpoints"] = spawnpoints;
        result["flags"] = flags;
        result["level"] = export;

        exportText.text = result.ToString(Formatting.Indented);
    }
}
