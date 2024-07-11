using Newtonsoft.Json.Linq;
using Newtonsoft.Json;
using System.Collections.Generic;
using System.Linq;
using System.Text.RegularExpressions;
using TMPro;
using UnityEditor;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using System.Globalization;
using System;

public class LevelCreatorManager : MonoBehaviour {

    public Grid referenceGrid;
    private GameObject[,,] levelGrid = new GameObject[100, 2, 100];

    public LayerMask builderLayer;
    public LevelOptionsManager levelOptionsManager;
    public LevelExportManager exportManager;
    public GameObject exampleButton;
    public GameObject exampleDropdown;
    public GameObject selectionPanel;
    public GameObject configPanelContent;
    public TMP_Dropdown sectionDropdown;
    public List<GameObject> buildingBlocks;
    public List<GameObject> interactables;
    public List<GameObject> miscellaneous;

    private GameObject currentBlock;
    private GameObject pointerBlock;
    private int currentOrientation = 0;
    private int currentSection;

    private List<(string, List<string>)> currentItemOptions;
    private List<(string optionTitle, string selectedOption)> currentOptions;
    private bool changedObject = false;

    private Vector3 dragOrigin;
    private bool dragging = false;
    private float moveSpeed = 50.0f;

    void Start() {
        int x = PlayerPrefs.GetInt("xSize");
        int y = PlayerPrefs.GetInt("ySize");
        PlayerPrefs.DeleteKey("xSize");
        PlayerPrefs.DeleteKey("ySize");
        string code = PlayerPrefs.GetString("Code");
        PlayerPrefs.DeleteKey("Code");
        if (x > 0 && y > 0 && x <= 100 && y <= 100) {
            LoadBase(x, y);
        } else if (code != "") {
            LoadCode(code);
        }
        SetPanel(buildingBlocks);
    }

    void Update() {
        CheckRotation();
        CheckOptions();
        CheckBuild();
        CheckDrag();
        CheckPointer();
    }

    #region Load
    private void LoadBase(int x, int y) {
        int counter = 0;
        for (int i = -(x / 2); i < Mathf.Ceil(x / 2) + (x % 2); i++) {
            for (int j = -(y / 2); j < Mathf.Ceil(y / 2) + (y % 2); j++) {
                Vector3 worldCellPosition = referenceGrid.CellToWorld(new Vector3Int(i, 0, j));
                worldCellPosition.x += referenceGrid.cellSize.x / 2;
                worldCellPosition.z += referenceGrid.cellSize.z / 2;
                levelGrid[i + 50, 0, j + 50] = Instantiate(buildingBlocks[0], worldCellPosition, Quaternion.Euler(new Vector3(0, currentOrientation, 0)));
                levelGrid[i + 50, 0, j + 50].transform.SetParent(referenceGrid.transform);
                levelGrid[i + 50, 0, j + 50].name = buildingBlocks[0].name + " " + counter;
                counter++;
            }
        }
    }
    private void LoadCode(string code) {
        JObject level;
        try {
            level = JObject.Parse(code);
        }
        catch (JsonReaderException e) {
            Debug.LogException(e);
            return;
        }

        string skybox = level["environment"]["skybox"].ToString();
        string level_name = level["environment"]["level_name"].ToString();
        string dev_minutes = level["environment"]["dev_minutes"].ToString();
        string dev_seconds = level["environment"]["dev_seconds"].ToString();
        string dev_blocks = level["environment"]["dev_blocks"].ToString();

        levelOptionsManager.SetSkybox(skybox);
        levelOptionsManager.SetLevelName(level_name);
        levelOptionsManager.SetDevTimes(dev_minutes, dev_seconds, dev_blocks);
        List<List<GameObject>> allObjectTabs = new List<List<GameObject>>() {
            buildingBlocks,
            interactables,
            miscellaneous
        };
        List<JArray> allJsonContainers = new List<JArray>() {
            level["spawnpoints"] as JArray,
            level["flags"] as JArray,
            level["level"] as JArray
        };

        foreach (JArray container in allJsonContainers) {
            foreach (JObject objectJson in container) {
                string objectName = Regex.Replace(objectJson["name"].ToString(), @"\s\d+$", "");
                GameObject correspondingObject = new GameObject();
                foreach (List<GameObject> tab in allObjectTabs) {
                    foreach (GameObject element in tab) {
                        if (element.name == objectName) {
                            correspondingObject = element;
                        }
                    }
                }
                string objectPosition = objectJson["position"].ToString();
                objectPosition = objectPosition.Trim('(', ')');
                string[] positionValues = objectPosition.Split(',');
                int xPos = (int)float.Parse(positionValues[0], CultureInfo.InvariantCulture);
                int yPos = (int)float.Parse(positionValues[1], CultureInfo.InvariantCulture);
                int zPos = (int)float.Parse(positionValues[2], CultureInfo.InvariantCulture);
                Vector3 worldCellPosition = referenceGrid.CellToWorld(new Vector3Int(xPos, yPos, zPos));
                worldCellPosition.x += referenceGrid.cellSize.x / 2;
                worldCellPosition.z += referenceGrid.cellSize.z / 2;

                string objectRotation = objectJson["rotation"].ToString();
                objectRotation = objectRotation.Trim('(', ')');
                string[] rotationValues = objectRotation.Split(',');
                float xRot = float.Parse(rotationValues[0], CultureInfo.InvariantCulture);
                float yRot = float.Parse(rotationValues[1], CultureInfo.InvariantCulture);
                float zRot = float.Parse(rotationValues[2], CultureInfo.InvariantCulture);
                float wRot = float.Parse(rotationValues[3], CultureInfo.InvariantCulture);
                Quaternion objectWorldRotation = new Quaternion(xRot, yRot, zRot, wRot);

                levelGrid[xPos + 50, yPos, zPos + 50] = Instantiate(correspondingObject, worldCellPosition, objectWorldRotation);

                GameObject[] allObjects = FindObjectsByType<GameObject>(FindObjectsInactive.Exclude, FindObjectsSortMode.None);
                GameObject[] matchingObjects = allObjects.Where(obj => obj.name.StartsWith(correspondingObject.name)).ToArray();
                int index = 0;
                while (matchingObjects.Any(element => { string pattern = $@"\b{index}$"; return Regex.IsMatch(element.name, pattern); })) {
                    index++;
                }
                levelGrid[xPos + 50, yPos, zPos + 50].name = correspondingObject.name + " " + index;
                foreach (JObject option in objectJson["options"] as JArray) {
                    levelGrid[xPos + 50, yPos, zPos + 50].GetComponent<GenericBlock>().SetOption(option.Properties().First().Name, option.Properties().First().Value.ToString());
                }
                levelGrid[xPos + 50, yPos, zPos + 50].transform.SetParent(referenceGrid.transform);
            }
        }
    }
    #endregion

    #region Building
    private void CheckRotation() {
        float scroll = Input.GetAxis("Mouse ScrollWheel");
        if (scroll > 0.0f) {
            currentOrientation -= 90;
            if (currentOrientation < 0) {
                currentOrientation += 360;
            }
        } else if (scroll < 0.0f) {
            currentOrientation += 90;
            if (currentOrientation > 360) {
                currentOrientation -= 360;
            }
        }
    }
    private void CheckBuild() {
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        RaycastHit hit;

        if (Input.GetMouseButtonDown(0) || Input.GetMouseButtonDown(1)) {
            if (Physics.Raycast(ray, out hit, 1000, builderLayer)) {
                Vector3 hitPoint = hit.point;
                hitPoint.y = 0;
                Vector3Int cell = referenceGrid.WorldToCell(hitPoint);
                Vector3 worldCellPosition = referenceGrid.CellToWorld(cell);
                worldCellPosition.x += referenceGrid.cellSize.x / 2;
                worldCellPosition.z += referenceGrid.cellSize.z / 2;
                if (Input.GetMouseButtonDown(0)) {
                    if (levelGrid[cell.x + 50, 0, cell.z + 50] == null && currentBlock != null) {
                        levelGrid[cell.x + 50, 0, cell.z + 50] = Instantiate(currentBlock, worldCellPosition, Quaternion.Euler(new Vector3(0, currentOrientation, 0)));
                        GameObject[] allObjects = FindObjectsByType<GameObject>(FindObjectsInactive.Exclude, FindObjectsSortMode.None);
                        GameObject[] matchingObjects = allObjects.Where(obj => obj.name.StartsWith(currentBlock.name)).ToArray();
                        int index = 0;
                        while(matchingObjects.Any(element => { string pattern = $@"\b{index}$"; return Regex.IsMatch(element.name, pattern); })) {
                            index++;
                        }
                        levelGrid[cell.x + 50, 0, cell.z + 50].name = currentBlock.name + " " + index;
                        if (currentOptions != null) {
                            foreach ((string, string) option in currentOptions) {
                                levelGrid[cell.x + 50, 0, cell.z + 50].GetComponent<GenericBlock>().SetOption(option.Item1, option.Item2);
                            }
                        }
                        levelGrid[cell.x + 50, 0, cell.z + 50].transform.SetParent(referenceGrid.transform);
                    } else if (levelGrid[cell.x + 50, 1, cell.z + 50] == null && currentBlock != null) {
                        worldCellPosition.y += referenceGrid.cellSize.y;
                        levelGrid[cell.x + 50, 1, cell.z + 50] = Instantiate(currentBlock, worldCellPosition, Quaternion.Euler(new Vector3(0, currentOrientation, 0)));
                        GameObject[] allObjects = FindObjectsByType<GameObject>(FindObjectsInactive.Exclude, FindObjectsSortMode.None);
                        GameObject[] matchingObjects = allObjects.Where(obj => obj.name.StartsWith(currentBlock.name)).ToArray();
                        int index = 0;
                        while (matchingObjects.Any(element => { string pattern = $@"\b{index}$"; return Regex.IsMatch(element.name, pattern); })) {
                            index++;
                        }
                        levelGrid[cell.x + 50, 1, cell.z + 50].name = currentBlock.name + " " + index;
                        if (currentOptions != null) {
                            foreach ((string, string) option in currentOptions) {
                                levelGrid[cell.x + 50, 1, cell.z + 50].GetComponent<GenericBlock>().SetOption(option.Item1, option.Item2);
                            }
                        }
                        levelGrid[cell.x + 50, 1, cell.z + 50].transform.SetParent(referenceGrid.transform);
                    }
                } else {
                    if (levelGrid[cell.x + 50, 1, cell.z + 50] != null) {
                        Destroy(levelGrid[cell.x + 50, 1, cell.z + 50]);
                        levelGrid[cell.x + 50, 1, cell.z + 50] = null;
                    } else {
                        Destroy(levelGrid[cell.x + 50, 0, cell.z + 50]);
                        levelGrid[cell.x + 50, 0, cell.z + 50] = null;
                    }
                }
            }
        }
    }
    private void CheckDrag() {
        if (Input.GetMouseButtonDown(2)) {
            dragOrigin = Input.mousePosition;
            dragging = true;
        }
        if (Input.GetMouseButtonUp(2)) {
            dragging = false;
        }
        if (dragging) {
            Vector3 difference = Input.mousePosition - dragOrigin;
            Vector3 move = new Vector3(-difference.x, 0, -difference.y) * moveSpeed * Time.deltaTime;
            Camera.main.transform.Translate(move, Space.World);
            dragOrigin = Input.mousePosition;
        }
    }
    private void CheckPointer() {
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        RaycastHit hit;

        Destroy(pointerBlock);
        pointerBlock = null;
        if (Physics.Raycast(ray, out hit, 1000, builderLayer)) {
            Vector3 hitPoint = hit.point;
            hitPoint.y = 0;
            Vector3Int cell = referenceGrid.WorldToCell(hitPoint);
            Vector3 worldCellPosition = referenceGrid.CellToWorld(cell);
            worldCellPosition.x += referenceGrid.cellSize.x / 2;
            worldCellPosition.z += referenceGrid.cellSize.z / 2;
            
            if (levelGrid[cell.x + 50, 0, cell.z + 50] == null && currentBlock != null) {
                pointerBlock = Instantiate(currentBlock, worldCellPosition, Quaternion.Euler(new Vector3(0, currentOrientation, 0)));
                pointerBlock.name = "Pointer block";
                if (currentOptions != null && pointerBlock.TryGetComponent<GenericBlock>(out GenericBlock testComponent)) {
                    foreach ((string, string) option in currentOptions) {
                        pointerBlock.GetComponent<GenericBlock>().SetOption(option.Item1, option.Item2);
                    }
                }
            } else if (levelGrid[cell.x + 50, 1, cell.z + 50] == null && currentBlock != null) {
                worldCellPosition.y += referenceGrid.cellSize.y;
                pointerBlock = Instantiate(currentBlock, worldCellPosition, Quaternion.Euler(new Vector3(0, currentOrientation, 0)));
                pointerBlock.name = "Pointer block";
                if (currentOptions != null && pointerBlock.TryGetComponent<GenericBlock>(out GenericBlock testComponent)) {
                    foreach ((string, string) option in currentOptions) {
                        pointerBlock.GetComponent<GenericBlock>().SetOption(option.Item1, option.Item2);
                    }
                }
            }
        }
    }
    private void CheckOptions() {
        if (currentBlock != null) {
            GameObject item = Instantiate(currentBlock);
            GameObject[] allObjects = FindObjectsByType<GameObject>(FindObjectsInactive.Exclude, FindObjectsSortMode.None);
            GameObject[] matchingObjects = allObjects.Where(obj => obj.name.StartsWith(currentBlock.name)).ToArray();
            item.name = currentBlock.name + " " + (matchingObjects.Length - 3);
            if (item.TryGetComponent<GenericBlock>(out GenericBlock testComp)) {
                currentItemOptions = item.GetComponent<GenericBlock>().GetOptions();
                if (changedObject) {
                    currentOptions = item.GetComponent<GenericBlock>().GetChosenOptions();
                }
            } else {
                currentItemOptions = null;
                currentOptions = null;
            }
            SetConfigPanel();
            changedObject = false;
            Destroy(item);
        } else {
            changedObject = false;
            currentItemOptions = null;
            currentOptions = null;
            SetConfigPanel();
        }
    }
    #endregion

    #region UI
    private void SetPanel(List<GameObject> items) {
        for (int i = 1; i <= selectionPanel.transform.childCount - 1; i++) {
            Destroy(selectionPanel.transform.GetChild(i).gameObject);
        }
        foreach (GameObject item in items) {
            GameObject newButton = Instantiate(exampleButton);
            newButton.name = item.name;
            newButton.transform.SetParent(selectionPanel.transform);
            newButton.transform.localScale = Vector3.one;
            newButton.GetComponent<RectTransform>().anchoredPosition3D = Vector3.zero;
            newButton.transform.localRotation = Quaternion.Euler(0, 0, 0);
            Texture2D thumbnail = (Texture2D)item.GetComponent<RawImage>().texture;
            if (thumbnail != null) {
                newButton.GetComponent<Image>().sprite = Sprite.Create(thumbnail, new Rect(0, 0, thumbnail.width, thumbnail.height), new Vector2(0.5f, 0.5f), 100.0f);
            }
            newButton.transform.GetChild(0).GetComponent<Text>().text = item.name;
            newButton.SetActive(true);
        }
    }
    public void ReturnToStart() {
        Camera.main.transform.localPosition = new Vector3(0, Camera.main.transform.localPosition.y, 0);
    }
    public void SectionChanged() {
        int section = sectionDropdown.value;
        currentSection = section;
        switch (section) {
            case 0:
                SetPanel(buildingBlocks);
                break;
            case 1:
                SetPanel(interactables);
                break;
            case 2:
                SetPanel(miscellaneous);
                break;
        }
    }
    public void ClearSelection() {
        currentBlock = null;
        for (int i = 1; i <= selectionPanel.transform.childCount - 1; i++) {
            selectionPanel.transform.GetChild(i).GetChild(1).gameObject.SetActive(false);
        }
    }
    public void ButtonClicked(BaseEventData data) {
        PointerEventData pointerData = data as PointerEventData;
        GameObject buttonGameObject = pointerData.pointerPress;
        List<GameObject> searchItems;
        switch (currentSection) {
            case 0:
                searchItems = buildingBlocks;
                break;
            case 1:
                searchItems = interactables;
                break;
            case 2:
                searchItems = miscellaneous;
                break;
            default:
                searchItems = buildingBlocks;
                break;
        }
        foreach (GameObject item in searchItems) {
            if (item.name == buttonGameObject.name && (currentBlock == null || item.name != currentBlock.name)) {
                currentBlock = item;
                changedObject = true;
            }
        }
        for (int i = 1; i <= selectionPanel.transform.childCount - 1; i++) {
            if (selectionPanel.transform.GetChild(i).name == buttonGameObject.name) {
                selectionPanel.transform.GetChild(i).GetChild(1).gameObject.SetActive(true);
            } else {
                selectionPanel.transform.GetChild(i).GetChild(1).gameObject.SetActive(false);
            }
        }
    }
    private void SetConfigPanel() {
        if (currentItemOptions != null) {
            // Guardamos toda la información de los dropdown en una variable
            List<(string, List<string>)> dropdownOptions = new List<(string, List<string>)>();
            for (int i = 1; i <= configPanelContent.transform.childCount - 1; i++) {
                List<string> stringOpts = new List<string>();
                foreach (TMP_Dropdown.OptionData data in configPanelContent.transform.GetChild(i).GetComponent<TMP_Dropdown>().options) {
                    stringOpts.Add(data.text);
                }
                dropdownOptions.Add((configPanelContent.transform.GetChild(i).GetComponent<TMP_Dropdown>().name, stringOpts));
            }

            // Ahora hay que comparar la variable con currentItemOptions y ver si son distintas
            // Hay que borrar los dropdown si tienen opciones faltantes o muy nuevas en contraste a currentItemOptions y poner updatedOptions = true;
            bool updatedOptions = false;
            foreach ((string key, List<string> opts) value in currentItemOptions) {
                HashSet<string> currentSet = new HashSet<string>(value.opts);
                HashSet<string> dropdownSet;
                if (dropdownOptions.Find(option => (option.Item1 == value.key)).Item2 != null) {
                    dropdownSet = new HashSet<string>(dropdownOptions.Find(option => (option.Item1 == value.key)).Item2);
                } else {
                    updatedOptions = true;
                    break;
                }
                if (!currentSet.SetEquals(dropdownSet)) {
                    updatedOptions = true;
                }
            }

            // Crea los dropdown si updatedOptions es true
            if (updatedOptions || changedObject) {
                for (int i = 1; i <= configPanelContent.transform.childCount - 1; i++) {
                    Destroy(configPanelContent.transform.GetChild(i).gameObject);
                }
                foreach ((string optionTitle, List<string> possibleOptions) option in currentItemOptions) {
                    GameObject newDropdown = Instantiate(exampleDropdown);
                    newDropdown.name = option.optionTitle;
                    newDropdown.transform.GetChild(1).GetComponent<Text>().text = option.optionTitle;
                    newDropdown.transform.SetParent(configPanelContent.transform);
                    newDropdown.transform.localScale = Vector3.one;
                    newDropdown.GetComponent<RectTransform>().anchoredPosition3D = Vector3.zero;
                    newDropdown.transform.localRotation = Quaternion.Euler(0, 0, 0);

                    newDropdown.transform.GetChild(0).GetComponent<TMP_Text>().text = option.optionTitle;
                    newDropdown.GetComponent<TMP_Dropdown>().AddOptions(option.possibleOptions);
                    newDropdown.SetActive(true);
                }
            }
        } else {
            for (int i = 1; i <= configPanelContent.transform.childCount - 1; i++) {
                Destroy(configPanelContent.transform.GetChild(i).gameObject);
            }
        }
    }
    public void DropdownChanged(GameObject dropdown) {
        int index = currentOptions.FindIndex(currentOption => currentOption.optionTitle == dropdown.name);
        currentOptions[index] = (dropdown.name, currentItemOptions[index].Item2[dropdown.GetComponent<TMP_Dropdown>().value]);
    }
    #endregion
}
