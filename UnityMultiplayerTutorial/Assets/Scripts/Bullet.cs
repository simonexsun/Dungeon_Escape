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
        Debug.Log("palyer is facing left");
    }

    [PunRPC]
    public void ChangeDir_up()
    {
        MoveUp = true;
        MoveDown = false;
        MoveLeft = false;
        MoveRight = false;
        Debug.Log("palyer is facing up");
    }
    [PunRPC]
    public void ChangeDir_right()
    {
        MoveRight = true;
        MoveLeft = false;
        MoveUp = false;
        MoveDown = false;
        Debug.Log("palyer is facing right");
    }

    [PunRPC]
    public void ChangeDir_down()
    {
        MoveDown = true;
        MoveRight = false;
        MoveUp = false;
        MoveLeft = false;
        Debug.Log("palyer is facing down");
    }

    [PunRPC]
    public void DestroyObject()
    {
        Destroy(this.gameObject);
    }

    private void Update()
    {
        transform.Translate(Vector2.right * MoveSpeed * Time.deltaTime);
        // if (MoveRight)
        // {
        //     transform.Translate(Vector2.right * MoveSpeed * Time.deltaTime);
        //     Debug.Log("Bullet is moving right");
        // }
        // if (MoveLeft)
        // {
        //     transform.Translate(Vector2.left * MoveSpeed * Time.deltaTime);
        //     Debug.Log("Bullet is moving left");
        // }
        // if (MoveUp)
        // {
        //     transform.Translate(Vector2.up * MoveSpeed * Time.deltaTime);
        //     Debug.Log("Bullet is moving up");
        // }
        // if (MoveDown)
        // {
        //     transform.Translate(Vector2.down * MoveSpeed * Time.deltaTime);
        //     Debug.Log("Bullet is moving down");
        // }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (!photonView.isMine)
            return;

        PhotonView target = collision.gameObject.GetComponent<PhotonView>();

        if (target != null && (!target.isMine || target.isSceneView))
        {
            if (target.tag == "Player")
            {
                target.RPC("ReduceHealth", PhotonTargets.AllBuffered, BulletDamage);
            }

            this.GetComponent<PhotonView>().RPC("DestroyObject", PhotonTargets.AllBuffered);
        }
        if (target != null)
        {
            if (target.tag == "Slime")
            {
                target.RPC("ReduceSlimeHealth", PhotonTargets.AllBuffered, BulletDamage);
                this.GetComponent<PhotonView>().RPC("DestroyObject", PhotonTargets.AllBuffered);
            }

        }
    }

}
