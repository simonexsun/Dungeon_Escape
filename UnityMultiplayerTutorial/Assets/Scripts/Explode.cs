using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Explode : Photon.MonoBehaviour
{
    public float ExplosionDamage;
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
        // if (!photonView.isMine)
        //     return;

        PhotonView target = collision.gameObject.GetComponent<PhotonView>();

        if (target != null)
        {

            if (target.tag == "Slime")
            {
                float forceX = this.transform.position.x - target.transform.position.x;

                float forceY = this.transform.position.y - target.transform.position.y;

                target.GetComponent<Rigidbody2D>().AddForce(new Vector2(-forceX, -forceY) * knockbackForce);

                target.RPC("ReduceSlimeHealth", PhotonTargets.AllBuffered, ExplosionDamage);
            }
        }
    }
}
