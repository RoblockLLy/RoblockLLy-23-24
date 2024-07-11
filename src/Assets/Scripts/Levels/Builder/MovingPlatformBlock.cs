using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MovingPlatformBlock : GenericPassiveInteractable {

    void Awake() {
        List<string> materialNames = new List<string>();
        foreach (Material mat in possibleMaterials) {
            materialNames.Add(mat.name);
        }
        configOptions.Add(("Color", materialNames));
        configOptions.Add(("Floor count", new List<string>() { "2", "3", "4" }));
        configOptions.Add(("Floor distance", new List<string>() { "1", "2", "3", "4", "5" }));
        configOptions.Add(("Movement speed", new List<string>() { "1", "2", "3", "4", "5", "6", "7", "8", "9", "10" }));
        foreach ((string optionTitle, List<string> possibleOptions) option in configOptions) {
            chosenOptions.Add((option.optionTitle, option.possibleOptions[0]));
        }
    }

    public override void SetOption(string option, string value) {
        int index = chosenOptions.FindIndex(chosenOption => chosenOption.optionTitle == option);
        chosenOptions[index] = (option, value);
        switch (chosenOptions[index].optionTitle) {
            case "Color":
                mainMesh.GetComponent<Renderer>().material = possibleMaterials.Find(possibleMaterial => possibleMaterial.name == value);
                break;
            case "Floor count":
                GetComponent<ElevatorInteractable>().floorCount = int.Parse(value);
                break;
            case "Floor distance":
                GetComponent<ElevatorInteractable>().floorDistance = int.Parse(value);
                break;
            case "Movement speed":
                GetComponent<ElevatorInteractable>().liftSpeed = int.Parse(value);
                break;
        }
    }
}
