using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : Photon.MonoBehaviour
{
    private bool MoveLeft = false; //false (right), true (left)
    private bool MoveRight = false;
    private bool MoveUp = false; // false (down), true(up);
    private bool MoveDown = false;

    public float MoveSpeed;

    public float DestroyTime;

    public float BulletDamage;

    private void Awake()
    {
        StartCoroutine("DestroyByTime");
    }



    IEnumerator DestroyByTime()
    {
        yield return new WaitForSeconds(DestroyTime);
        this.GetComponent<PhotonView>().RPC("DestroyObject", PhotonTargets.AllBuffered);
    }

    [PunRPC]
    public void ChangeDir_left()
    {
        MoveLeft = true;
        MoveRight = false;
        MoveUp = false;
        MoveDown = false;
    }

    [PunRPC]
    public void ChangeDir_up()
    {
        MoveUp = true;
        MoveDown = false;
        MoveLeft = false;
        MoveRight = false;
    }
    [PunRPC]
    public void ChangeDir_right()
    {
        MoveRight = true;
        MoveLeft = false;
        MoveUp = false;
        MoveDown = false;
    }

    [PunRPC]
    public void ChangeDir_down()
    {
        MoveDown = true;
        MoveRight = false;
        MoveUp = false;
        MoveLeft = false;
    }

    [PunRPC]
    public void DestroyObject()
    {
        Destroy(this.gameObject);
    }

    private void Update()
    {
        if (MoveRight)
        {
            transform.Translate(Vector2.right * MoveSpeed * Time.deltaTime);
        }
        if (MoveLeft)
        {
            transform.Translate(Vector2.left * MoveSpeed * Time.deltaTime);
        }
        if (MoveUp)
        {
            transform.Translate(Vector2.up * MoveSpeed * Time.deltaTime);
        }
        if (MoveDown)
        {
            transform.Translate(Vector2.down * MoveSpeed * Time.deltaTime);
        }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (!photonView.isMine)
            return;

        PhotonView target = collision.gameObject.GetComponent<PhotonView>();

        if(target != null && (!target.isMine || target.isSceneView))
        {
            if (target.tag == "Player")
            {
                target.RPC("ReduceHealth", PhotonTargets.AllBuffered, BulletDamage);
            }

            this.GetComponent<PhotonView>().RPC("DestroyObject", PhotonTargets.AllBuffered);
        }
        if(target != null)
        {
            if (target.tag == "Slime")
            {
                target.RPC("ReduceSlimeHealth", PhotonTargets.AllBuffered, BulletDamage);
                this.GetComponent<PhotonView>().RPC("DestroyObject", PhotonTargets.AllBuffered);
            }
            
        }
    }

}
