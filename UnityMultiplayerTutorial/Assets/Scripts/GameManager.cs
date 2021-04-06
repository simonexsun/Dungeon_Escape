using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.AI;

public class GameManager : MonoBehaviour
{
    public static GameManager Instance;

    [Header("Prefabs")]
    public GameObject DragonPrefab;
    public GameObject HumanPrefab;
    public GameObject SlimePrefab;

    [Header("Game UI")]
    public GameObject SpawnCanvas;
    public GameObject Warning;
    public GameObject SceneCamera;
    public GameObject PlayButton;
    public Button StartPlayButton;
    public GameObject TimerText;    
    public GameObject InstructionMenu;
    public GameObject ReadyMenu;
    public GameObject ReadyButton;
    public Text TimerWarningText;
    [HideInInspector]public bool ConfirmStartTimer = false;    
    public GameObject DeadMenu;

    [Header("Player Feed Setting")]
    public Text PingText;
    public Text RoomName;
    public GameObject disconnectUI;
    private bool Off = false;
    public GameObject PlayerFeed;
    public GameObject FeedGrid;

    [Header("Respawn Setting")]
    public Text RespawnTimerText;
    public GameObject RespawnMenu;
    private float TimerAmount = 5f;
    private bool RunSpawnTimer = false;

    [Header("SlimeSpawn")]
    public Transform SlimePos;
    public int SlimeCount = 5;
    public int SlimeAlive = 5;

    [Header("PlayerSpawn")]
    [HideInInspector]public GameObject LocalPlayer;
    public bool isDragon; // localPlayerOnThisComputerClickedTheDragonBox
    public int humanCount = 0;
    public int dragonCount = 0;

    [Header("NavMesh Setting")]
    public NavMeshSurface surface;

    private void Awake()
    {
        Instance = this;
        SpawnCanvas.SetActive(true);
        // RoomName.text = "Room name: " + PhotonNetwork.GetRoomList();
    }

    private void Update()
    {
        CheckInput();
        PingText.text = "Ping: " + PhotonNetwork.GetPing();

        if (RunSpawnTimer)
        {
            StartRespawn();
        }

        if(SlimeAlive < humanCount * SlimeCount)
        {
            PhotonNetwork.Instantiate(SlimePrefab.name, new Vector2(SlimePos.transform.position.x, SlimePos.transform.position.y), Quaternion.identity, 0);
            SlimeAlive++;
            Debug.Log("new slime is spawning");
        }
    }

    public void EnableBakeMesh()
    {
        surface.BuildNavMesh();
        Debug.Log("baking mesh....");
    }

    public void Die(){
        DeadMenu.SetActive(true);
        InstructionMenu.SetActive(false);
        ReadyMenu.SetActive(false);
    }

    public void EnableRespawn()
    {
        TimerAmount = 5f;
        RunSpawnTimer = true;
        RespawnMenu.SetActive(true);
    }

    private void StartRespawn()
    {
        TimerAmount -= Time.deltaTime;
        RespawnTimerText.text = "Respawning in " + TimerAmount.ToString("F0");

        if(TimerAmount <= 0)
        {
            LocalPlayer.GetComponent<PhotonView>().RPC("Respawn", PhotonTargets.AllBuffered);
            LocalPlayer.GetComponent<Health>().EnableInput();
            RespawnLocation();
            RespawnMenu.SetActive(false);
            RunSpawnTimer = false;
        }
    }

    public void RespawnLocation()
    {
        float randomValue = Random.Range(-3, 5f);
        LocalPlayer.transform.localPosition = new Vector2(randomValue, 3f);
    }

    public void CheckReady()
    {
        if(humanCount>0 && dragonCount>0){
            TimerWarningText.text = "Hit 'yes' will start the timer!";
        }else{
            TimerWarningText.text = "You need to have at least 1 dragon and 1 human to start the game!";
            ConfirmStartTimer = false;
        }
    }
    private void CheckInput()
    {
        if (Input.GetKeyDown(KeyCode.Return) && SpawnCanvas.active){
            StartPlayButton.onClick.Invoke();
        }

        if(Off && Input.GetKeyDown(KeyCode.Escape))
        {
            disconnectUI.SetActive(false);
            Off = false;
        } else if(!Off && Input.GetKeyDown(KeyCode.Escape))
        {
            disconnectUI.SetActive(true);
            Off = true;
        }
    }

    public void SelectDragon()
    {
        PlayButton.SetActive(false);
        if(dragonCount < 1){
            isDragon = true;
            Debug.Log("I'm Dragon.");
            PlayButton.SetActive(true);
        }else{
            Warning.SetActive(true);
        }
    }
    public void SelectHuman()
    {
        Warning.SetActive(false);
        isDragon = false;
        Debug.Log("I'm Human.");
        PlayButton.SetActive(true);
    }

    public void SpawnPlayer()
    {
        float randomValue = Random.Range(-1f, 1f);
        if(isDragon)
        {
            this.GetComponent<PhotonView>().RPC("addDragon", PhotonTargets.AllBuffered);
            PhotonNetwork.Instantiate(DragonPrefab.name, new Vector2(this.transform.position.x * randomValue, this.transform.position.y * randomValue), Quaternion.identity, 0);
        }else
        {
            // spawn 5 slimes per player
            spawnSlime();
            this.GetComponent<PhotonView>().RPC("addHuman", PhotonTargets.AllBuffered);
            PhotonNetwork.Instantiate(HumanPrefab.name, new Vector2(this.transform.position.x * randomValue, this.transform.position.y * randomValue), Quaternion.identity, 0);
        }
        SpawnCanvas.SetActive(false);
        SceneCamera.SetActive(false);
        ReadyMenu.SetActive(true);
    }
    public void ConfirmStartGame(){
        if(ConfirmStartTimer){
            ReadyMenu.SetActive(false);
            InstructionMenu.SetActive(true);
            TimerText.SetActive(true);
        }
    }

    //spawn NPCs for each room
    private void spawnSlime()
    {
        for (int i = 0; i < SlimeCount; i++)
        {
            float randomValue = Random.Range(6f, -6f);
            PhotonNetwork.Instantiate(SlimePrefab.name, new Vector2(SlimePos.transform.position.x * randomValue, SlimePos.transform.position.x * randomValue), Quaternion.identity, 0);
        }
    }
    

    public void LeaveRoom()
    {
        PhotonNetwork.LeaveRoom();
        PhotonNetwork.LoadLevel(0);
    }


    private void OnPhotonPlayerConnected(PhotonPlayer player)
    {
        GameObject obj = Instantiate(PlayerFeed, new Vector2(0, 0), Quaternion.identity);
        obj.transform.SetParent(FeedGrid.transform, false);
        obj.GetComponent<Text>().text = player.name + " joined the game";
        obj.GetComponent<Text>().color = Color.green;
    }


    private void OnPhotonPlayerDisconnected(PhotonPlayer player)
    {
        GameObject obj = Instantiate(PlayerFeed, new Vector2(0, 0), Quaternion.identity);
        obj.transform.SetParent(FeedGrid.transform, false);
        obj.GetComponent<Text>().text = player.name + " left the game";
        obj.GetComponent<Text>().color = Color.red;
    }

    [PunRPC]
    private void addDragon()
    {
        // Array.Resize(ref dragonList, dragonList.Length ++);
        // humanList.SetValue( dragonClone, dragonList.Length-1 );
        // Debug.Log(dragonList);
        // dragonCount = dragonList.Length;
        dragonCount ++;
    }
    [PunRPC]
    private void addHuman()
    {
        // Array.Resize(ref humanList, humanList.Length ++);
        // humanList.SetValue( humanClone, humanList.Length-1 );
        // Debug.Log(huamnList);
        // humanCount = humanList.Length;
        humanCount ++;
    }
    [PunRPC]
    public void ToggleStartTimer(){
        ConfirmStartTimer = true;
    }
}
