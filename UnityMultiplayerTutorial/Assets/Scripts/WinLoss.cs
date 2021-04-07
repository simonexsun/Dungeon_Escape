using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class WinLoss : Photon.MonoBehaviour
{
    public GameObject[] humans;
    public float timer;
    public Text timerText;
    public float humanDeadCount;

    // Update is called once per frame
    private void Start()
    {
        timer = 60f;
        humanDeadCount = 0;
    }

    void Update()
    {
        // Debug.Log("Human:" + GameManager.Instance.humanCount);
        // Debug.Log("Dragon:" + GameManager.Instance.dragonCount);

        if (GameManager.Instance.dragonCount > 0 && GameManager.Instance.humanCount > 0 && GameManager.Instance.ConfirmStartTimer)
        {
            CheckWL();
            photonView.RPC("UpdateTimer", PhotonTargets.AllBuffered);
        }
        timerText.text = "Time left: " + timer.ToString("F0");
    }

    public void CheckWL()
    {
        humans = GameObject.FindGameObjectsWithTag("Player");

        foreach (GameObject human in humans)
        {
            if(human.GetComponent<Health>().alive == false)
            {
                Debug.Log("1 human is died");
                humanDeadCount ++;
                human.tag="DeadPlayer";
            }
            else
            {
                // Debug.Log("some are still alive");
            }
        }

        if (timer <= 0f)
        {
            if(humanDeadCount == GameManager.Instance.humanCount){
                BossWin();
            }else{
                HumansWin();
            }
        }
    }

    public void BossWin()
    {
        PhotonNetwork.LeaveRoom();
        PhotonNetwork.LoadLevel("BossWin");
        // SceneManager.LoadScene("BossWin", LoadSceneMode.Single);
    }

    public void HumansWin()
    {
        PhotonNetwork.LeaveRoom();
        PhotonNetwork.LoadLevel("HumanWin");
        // SceneManager.LoadScene("HumanWin", LoadSceneMode.Single);
    }

    [PunRPC]
    private void UpdateTimer(){
        timer -= 1 * Time.deltaTime;
    }
}


