using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Dragon : Photon.MonoBehaviour
{
    public PhotonView photonView;
    public Rigidbody2D rb;
    public Animator anim;
    public GameObject PlayerCamera;
    public SpriteRenderer sr;
    public Text PlayerNameText;
    public float MoveSpeed;

    public Transform playerPos;
    public float positionRadius;

    public GameObject BulletObject;
    public Transform FirePos;

    public bool DisableInput = false;


    private void Awake()
    {
        if (photonView.isMine)
        {
            PlayerCamera.SetActive(true);
            PlayerNameText.text = PhotonNetwork.playerName;
        }
        else
        {
            PlayerNameText.text = photonView.owner.name;
            PlayerNameText.color = Color.cyan;
        }
    }

    private void Update()
    {
        if (photonView.isMine && !DisableInput)
        {
            CheckInput();
        }
    }

    private void CheckInput()
    {
        // var moveH = new Vector3(Input.GetAxis("Horizontal"), 0, 0);
        // var moveV = new Vector3(0, Input.GetAxis("Vertical"), 0);
        // transform.position += moveH * MoveSpeed * Time.deltaTime;
        // transform.position += moveV * MoveSpeed * Time.deltaTime;

        if (Input.GetKey("a"))
        {
            rb.rotation += 100.0f * Time.deltaTime;
        }
        if (Input.GetKey("d"))
        {
            rb.rotation -= 100.0f * Time.deltaTime;
        }
        if (Input.GetKey("w"))
        {
            rb.AddForce(transform.up * MoveSpeed);
        }
        if (Input.GetKey("s"))
        {
            rb.AddForce(transform.up * MoveSpeed * -1);
        }
        Debug.Log("Rotated" + rb.rotation);


        if (Input.GetKeyDown(KeyCode.Space))
        {
            Shoot();
        }

        //flip face direction
        if (Input.GetAxis("Horizontal") < 0)
        {
            // photonView.RPC("FlipTrue", PhotonTargets.AllBuffered);
            sr.flipX = true;
        }
        if (Input.GetAxis("Horizontal") > 0)
        {
            // photonView.RPC("FlipFalse", PhotonTargets.AllBuffered);
            sr.flipX = false;
        }

        //play running animator
        if (Input.GetAxis("Horizontal") != 0)
        {
            anim.SetBool("isRunning", true);
        }
        else
        {
            anim.SetBool("isRunning", false);
        }
    }



    private void Shoot()
    {
        if (sr.flipX == false)
        {
            GameObject obj = PhotonNetwork.Instantiate(BulletObject.name, new Vector2(FirePos.transform.position.x, FirePos.transform.position.y), Quaternion.identity, 0);
        }

        if (sr.flipX == true)
        {
            GameObject obj = PhotonNetwork.Instantiate(BulletObject.name, new Vector2(FirePos.transform.position.x, FirePos.transform.position.y), Quaternion.identity, 0);
            obj.GetComponent<PhotonView>().RPC("ChangeDir_left", PhotonTargets.AllBuffered);
        }

        anim.SetTrigger("shootTrigger");
    }



    [PunRPC]
    private void FlipTrue()
    {
        sr.flipX = true;
    }

    [PunRPC]
    private void FlipFalse()
    {
        sr.flipX = false;
    }

}
