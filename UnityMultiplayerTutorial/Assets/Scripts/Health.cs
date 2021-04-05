using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Health : Photon.MonoBehaviour
{
    public float HealthAmount;

    public Image FillImage;

    public Player playerMove;
    public Rigidbody2D rb;
    public BoxCollider2D bc;
    public SpriteRenderer sr;
    public GameObject PlayerCanvas;
    public Camera PlayerCamera;

    //audio
    AudioSource audioSource;
    public AudioClip hit2;
    public AudioClip death;

    public bool alive = true;

    private void Awake()
    {
        audioSource = GetComponent<AudioSource>();
        if (photonView.isMine)
        {
            GameManager.Instance.LocalPlayer = this.gameObject;
        }
    }


    [PunRPC]
    public void ReduceHealth(float amount)
    {
        // Debug.Log(amount);
        audioSource.PlayOneShot(hit2, 1F);
        ModifyHealth(amount);
    }

    private void CheckHealth()
    {
        //FillImage.fillAmount = HealthAmount / 100f;

        if (photonView.isMine && HealthAmount <= 0)
        {
            alive = false;
            Debug.Log("player is dead");
            GameManager.Instance.Die();
            playerMove.DisableShoot = true;
            // GameManager.Instance.EnableRespawn();
            // playerMove.DisableInput = true;
            this.GetComponent<PhotonView>().RPC("Dead", PhotonTargets.AllBuffered);
        }
    }

    public void EnableInput()
    {
        playerMove.DisableInput = false;
    }

    [PunRPC]
    private void Dead()
    {
        audioSource.PlayOneShot(death, 1F);
        bc.enabled = false; 
        sr.enabled = false; //disable sprite display
        PlayerCanvas.SetActive(false); //diable name tag and health bar display
        Color tmp = sr.color;
        tmp.a = 100f;
        sr.color = tmp; //make the sprite transparent 
        PlayerCamera.orthographicSize = 16;
    }

    [PunRPC]
    private void Respawn()
    {
        rb.gravityScale = 0;
        bc.enabled = true;
        sr.enabled = true;
        PlayerCanvas.SetActive(true);
        FillImage.fillAmount = 1f;
        HealthAmount = 100f;
    }


    private void ModifyHealth(float amount)
    {
        if (photonView.isMine)
        {
            HealthAmount -= amount;
            FillImage.fillAmount -= amount/100;

        }
        else
        {
            HealthAmount -= amount;
            FillImage.fillAmount -= amount/100;
        }

        CheckHealth();

    }
}
