using Newtonsoft.Json.Linq;
using System.Collections.Generic;
using UnityEngine;

public abstract class GenericBlock : MonoBehaviour {
    protected List<(string optionTitle, List<string> possibleOptions)> configOptions = new List<(string optionTitle, List<string> possibleOptions)>();
    protected List<(string optionTitle, string possibleOption)> chosenOptions = new List<(string, string)>();

    protected virtual void Start() { }

    protected virtual void Update() { }

    public virtual List<(string, List<string>)> GetOptions() {
        return configOptions;
    }

    public virtual List<(string, string)> GetChosenOptions() {
        return chosenOptions;
    }

    public abstract void SetOption(string option, string value);

    public virtual JObject GetJson() {
        JObject json = new JObject();
        json["name"] = transform.name;
        json["position"] = GameObject.Find("Build").GetComponent<Grid>().WorldToCell(new Vector3(transform.position.x, transform.position.y, transform.position.z)).ToString();
        json["rotation"] = transform.rotation.ToString();
        JArray options = new JArray();
        foreach ((string optionTitle, string possibleOption) chosenOption in chosenOptions) {
            JObject option = new JObject {
                { chosenOption.optionTitle, chosenOption.possibleOption }
            };
            options.Add(option);
        }
        json["options"] = options;
        return json;
    }
}
