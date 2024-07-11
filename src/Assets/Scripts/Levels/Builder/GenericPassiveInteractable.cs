using Newtonsoft.Json.Linq;
using System.Collections.Generic;
using UnityEngine;

public class GenericPassiveInteractable : GenericBlock {
    public GameObject mainMesh;
    public List<Material> possibleMaterials;

    void Awake() {
        List<string> materialNames = new List<string>();
        foreach (Material mat in possibleMaterials) {
            materialNames.Add(mat.name);
        }
        configOptions.Add(("Color", materialNames));
        foreach ((string optionTitle, List<string> possibleOptions) option in configOptions) {
            chosenOptions.Add((option.optionTitle, option.possibleOptions[0]));
        }
    }

    public override void SetOption(string option, string value) {
        int index = chosenOptions.FindIndex(chosenOption => chosenOption.optionTitle == option);
        chosenOptions[index] = (option, value);
        if (chosenOptions[index].optionTitle == "Color") {
            mainMesh.GetComponent<Renderer>().material = possibleMaterials.Find(possibleMaterial => possibleMaterial.name == value);
        }
    }
}
