using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Player : Photon.MonoBehaviour
{
    //assets parameters
    public PhotonView photonView;
    public Rigidbody2D rb;
    public Animator anim;
    public GameObject PlayerCamera;
    public SpriteRenderer sr;
    public Text PlayerNameText;
    public BoxCollider2D box;

    //movement parameters
    public float MoveSpeed;
    public float turnSpeed;
    public bool isDragon;

    // public Transform playerPos;

    //attack parameters
    public GameObject BulletObject;
    public Transform FirePos;

    public bool DisableInput = false;
    public bool DisableShoot = false;

    [Header("direction bools")]
    public bool faceUp = false;
    public bool faceDown = false;
    public bool faceLeft = false;
    public bool faceRight = false;


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
        if (isDragon)
        {
            rb.constraints = RigidbodyConstraints2D.FreezeRotation;

            if (Input.GetKey("a"))
            {
                rb.transform.Rotate(0.0f, 0.0f, turnSpeed * Time.deltaTime, Space.Self);
            }
            if (Input.GetKey("d"))
            {
                rb.transform.Rotate(0.0f, 0.0f, -turnSpeed * Time.deltaTime, Space.Self);
            }
            if (Input.GetKey("w"))
            {
                rb.AddForce(transform.up * MoveSpeed);
            }
            if (Input.GetKey("s"))
            {
                rb.AddForce(transform.up * MoveSpeed * -1);
            }
        }
        else
        {
            // var moveH = new Vector3(Input.GetAxis("Horizontal"), 0, 0);
            // var moveV = new Vector3(0, Input.GetAxis("Vertical"), 0);
            // transform.position += moveH * MoveSpeed * Time.deltaTime;
            // transform.position += moveV * MoveSpeed * Time.deltaTime;
            if (Input.GetKey("a"))
            {
                transform.position += transform.right * Time.deltaTime * MoveSpeed * -1;
            }
            if (Input.GetKey("d"))
            {
                transform.position += transform.right * Time.deltaTime * MoveSpeed;
            }
            if (Input.GetKey("w"))
            {
                transform.position += transform.up * Time.deltaTime * MoveSpeed;
            }
            if (Input.GetKey("s"))
            {
                transform.position += transform.up * Time.deltaTime * MoveSpeed * -1;
            }
        }


        if (Input.GetKeyDown(KeyCode.Space) && !DisableShoot)
        {
            Shoot();
            enlargeBoxCollider();
        }else if (Input.GetKeyUp(KeyCode.Space))
        {
            resetBoxCollider();
        }

        //flip face direction
        if (Input.GetAxis("Horizontal") < 0)
        {
            photonView.RPC("FlipTrue", PhotonTargets.AllBuffered);
        }
        if (Input.GetAxis("Horizontal") > 0)
        {
            photonView.RPC("FlipFalse", PhotonTargets.AllBuffered);
        }
        if (Input.GetAxis("Vertical") < 0)
        {
            photonView.RPC("FlipDown", PhotonTargets.AllBuffered);
        }
        if (Input.GetAxis("Vertical") > 0)
        {
            photonView.RPC("FlipUp", PhotonTargets.AllBuffered);
        }

        //play running animation
        if (Input.GetAxis("Horizontal") != 0)
        {
            anim.SetBool("isRunning", true);
        }
        else
        {
            anim.SetBool("isRunning", false);
        }

    }

    private void enlargeBoxCollider()
    {
        box.size *= 5;
    }
    private void resetBoxCollider()
    {
        box.size /= 5;
    }

    private void Shoot()
    {

        if (isDragon)
        {
            Vector2 bulletPos = new Vector2(FirePos.transform.position.x, FirePos.transform.position.y);
            GameObject obj = PhotonNetwork.Instantiate(BulletObject.name, bulletPos, Quaternion.identity, 0);
            obj.transform.Rotate(0.0f, 0.0f, rb.rotation + 90, Space.Self);
            // obj.GetComponent<PhotonView>().RPC("ChangeDir_right", PhotonTargets.AllBuffered);
        }
        else
        {
            Vector2 bulletPos = new Vector2(FirePos.transform.position.x, FirePos.transform.position.y);
            //Checking if human going up or going down, spawn the bullet accordingly
            GameObject obj = PhotonNetwork.Instantiate(BulletObject.name, bulletPos, Quaternion.identity, 0);

            if (faceLeft)
            {
                // obj.GetComponent<PhotonView>().RPC("ChangeDir_right", PhotonTargets.AllBuffered);
                obj.transform.Rotate(0.0f, 0.0f, 180, Space.Self);
            }
            if (faceRight)
            {
                // obj.GetComponent<PhotonView>().RPC("ChangeDir_right", PhotonTargets.AllBuffered);
            }
            if (faceUp)
            {
                // bulletPos = new Vector2(FirePosUp.transform.position.x, FirePosUp.transform.position.y);
                // obj.GetComponent<PhotonView>().RPC("ChangeDir_right", PhotonTargets.AllBuffered);
                obj.transform.Rotate(0.0f, 0.0f, -90, Space.Self);
            }
            if (faceDown)
            {
                // bulletPos = new Vector2(FirePosDown.transform.position.x, FirePosDown.transform.position.y);
                // obj.GetComponent<PhotonView>().RPC("ChangeDir_right", PhotonTargets.AllBuffered);
                obj.transform.Rotate(0.0f, 0.0f, 90, Space.Self);
            }
        }

        anim.SetTrigger("shootTrigger");
    }



    [PunRPC]
    private void FlipTrue()
    {
        sr.flipX = true;

        faceLeft = true;
        faceRight = false;
        faceUp = false;
        faceDown = false;
    }

    [PunRPC]
    private void FlipFalse()
    {
        sr.flipX = false;

        faceRight = true;
        faceLeft = false;
        faceUp = false;
        faceDown = false;
    }

    [PunRPC]
    private void FlipUp()
    {
        faceUp = true;
        faceLeft = true;
        faceRight = false;
        faceDown = false;
    }

    [PunRPC]
    private void FlipDown()
    {
        faceDown = true;
        faceLeft = true;
        faceRight = false;
        faceUp = false;
    }

}
