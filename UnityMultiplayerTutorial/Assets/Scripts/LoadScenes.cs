using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;


public class LoadScenes : MonoBehaviour
{
    public void returnToMainMenu()
    {
        PhotonNetwork.LoadLevel(0);
        Debug.Log("return to main menu");
        // SceneManager.LoadScene("MainMenu", LoadSceneMode.Single);
    }
}
