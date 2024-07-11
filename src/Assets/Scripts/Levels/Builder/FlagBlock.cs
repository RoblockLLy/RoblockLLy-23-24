using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FlagBlock : GenericBlock {

    void Awake() {
        configOptions.Add(("Timed", new List<string>() { "False", "True" }));
        configOptions.Add(("Seconds for win", new List<string>() { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10" }));
        foreach ((string optionTitle, List<string> possibleOptions) option in configOptions) {
            chosenOptions.Add((option.optionTitle, option.possibleOptions[0]));
        }
    }

    public override void SetOption(string option, string value) {
        int index = chosenOptions.FindIndex(chosenOption => chosenOption.optionTitle == option);
        chosenOptions[index] = (option, value);
        switch (chosenOptions[index].optionTitle) {
            case "Timed":
                GetComponent<FlagBehaviour>().timed = bool.Parse(value);
                break;
            case "Seconds for win":
                GetComponent<FlagBehaviour>().secondsForWin = int.Parse(value);
                break;
        }
    }
}
