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
    public int count = 0;

    // Update is called once per frame
    private void Start()
    {
        timer = 60f;
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

        if (timer <= 0 && count == GameManager.Instance.humanCount)
        {
            Debug.Log("all humans are dead");
            BossWin();


        }
        else if(timer <= 0)
        {
            HumansWin();
        }
            
       
        foreach (GameObject human in humans)
        {
            if (human.GetComponent<Health>().alive == false)
            {
                Debug.Log("this human die");
                count++;

            }
            else if (human.GetComponent<Health>().alive == true)
            {
                HumansWin();
            }
        }

        //if (timer <= 0f)
        //{
        //    HumansWin();
        //}
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


