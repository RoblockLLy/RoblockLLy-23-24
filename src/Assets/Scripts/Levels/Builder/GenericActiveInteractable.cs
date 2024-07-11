using Newtonsoft.Json.Linq;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class GenericActiveInteractable : GenericBlock {

    void Awake() {
        chosenOptions = new List<(string optionTitle, string possibleOption)>();
        RefreshOptions();
    }

    public override List<(string, List<string>)> GetOptions() {
        RefreshOptions();
        return configOptions;
    }

    public override List<(string, string)> GetChosenOptions() {
        RefreshOptions();
        return chosenOptions;
    }

    private void RefreshOptions() {
        configOptions = new List<(string, List<string>)>();
        List<string> passiveOptions = new List<string>() {
            "None",
            "Activate",
            "Deactivate",
            "Hold",
            "Toggle"
        };
        List<GameObject> allPassives = GameObject.FindGameObjectsWithTag("Passive Interactable").ToList();
        List<string> passiveStrings = new List<string>();
        foreach (GameObject passive in allPassives) {
            passiveStrings.Add(passive.name);
        }
        for (int i = 0; i < passiveStrings.Count; i++) {
            configOptions.Add((passiveStrings[i], passiveOptions));
        }

        foreach ((string optionTitle, List<string> possibleOptions) option in configOptions) {
            if (chosenOptions.FindIndex(op => op.optionTitle == option.optionTitle) == -1) {
                chosenOptions.Add((option.optionTitle, "None"));
            }
        }
        for (int i = 0; i < chosenOptions.Count; i++) {
            if (configOptions.FindIndex(op => op.optionTitle == chosenOptions[i].optionTitle) == -1) {
                chosenOptions.RemoveAt(i);
                i--;
            }
        }
    }

    public override void SetOption(string option, string value) {
        GetComponent<ActiveInteractable>().ClearInteractables();
        for (int i = 0;i < chosenOptions.Count;i++) {
            if (chosenOptions[i].optionTitle == option) {
                chosenOptions[i] = (chosenOptions[i].optionTitle, value);
            }
            switch (chosenOptions[i].possibleOption) {
                case "Activate":
                    GetComponent<ActiveInteractable>().AddActivateableInteractable(GameObject.Find(chosenOptions[i].optionTitle));
                        break;
                case "Deactivate":
                    GetComponent<ActiveInteractable>().AddDeactivateableInteractable(GameObject.Find(chosenOptions[i].optionTitle));
                    break;
                case "Hold":
                    GetComponent<ActiveInteractable>().AddHoldableInteractable(GameObject.Find(chosenOptions[i].optionTitle));
                    break;
                case "Toggle":
                    GetComponent<ActiveInteractable>().AddToggleabeInteractable(GameObject.Find(chosenOptions[i].optionTitle));
                    break;
            }
        }
        RefreshOptions();
    }
}
