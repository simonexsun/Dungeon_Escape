using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SlimeHealth : Photon.MonoBehaviour
{
    public float HealthAmount;
    public Image FillImage;
    public Animator anim;
    public float SlimeRechargeSpeed = 0.02f;
    private bool isDead = false;

    private void Awake()
    {
        
    }

    [PunRPC]
    public void ReduceSlimeHealth(float amount)
    {
        ModifyHealth(amount);
    }


    [PunRPC]
    public void DestroyObject()
    {
        Destroy(this.gameObject);
    }

    private void ModifyHealth(float amount)
    {
        if (photonView.isMine)
        {
            HealthAmount -= amount;
            FillImage.fillAmount -= amount;

        }
        else
        {
            HealthAmount -= amount;
            FillImage.fillAmount -= amount;
        }

        CheckHealth();

    }



    private void CheckHealth()
    {
        FillImage.fillAmount = HealthAmount / 100f;
        if (photonView.isMine && HealthAmount <= 0)
        {
            Debug.Log("Slime is dead");
            isDead = true;
            //anim.SetBool("isRunning", false);
            GameManager.Instance.SlimeAlive --;
            this.GetComponent<PhotonView>().RPC("DestroyObject", PhotonTargets.AllBuffered);
        }
    }
}
