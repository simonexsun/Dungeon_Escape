using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class harmHuman : Photon.MonoBehaviour
{
    public float SlimeDamage;
    float knockbackForce = 1200f;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    private void OnCollisionEnter2D(Collision2D collision)
    {
        //if (!photonView.isMine)
        //    return;

        PhotonView target = collision.gameObject.GetComponent<PhotonView>();

        if (target != null)
        {

            if (target.tag == "Player")
            {
                float forceX = this.transform.position.x - target.transform.position.x;

                float forceY = this.transform.position.y - target.transform.position.y;

                target.GetComponent<Rigidbody2D>().AddForce(new Vector2(-1 * forceX, -1 * forceY) * knockbackForce);

                target.RPC("ReduceHealth", PhotonTargets.AllBuffered, SlimeDamage);
            }

            //this.GetComponent<PhotonView>().RPC("DestroyObject", PhotonTargets.AllBuffered);
        }
    }
}
