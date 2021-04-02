using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LoadScenes : MonoBehaviour
{
    public void ReturnToMainMenu()
    {
        Debug.Log("returning...");
        SceneManager.LoadScene("MainMenu", LoadSceneMode.Single);
    }
}
