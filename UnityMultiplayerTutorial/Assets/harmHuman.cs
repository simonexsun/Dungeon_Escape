using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class harmHuman : Photon.MonoBehaviour
{
    public float SlimeDamage = 0.1f;
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
        if (!photonView.isMine)
            return;

        Debug.Log("THIS HARM HUMANNNNN");
        PhotonView target = collision.gameObject.GetComponent<PhotonView>();

        if (target != null && (!target.isMine || target.isSceneView))
        {
            if (target.tag == "Player")
            {
                
                target.RPC("ReduceHealth", PhotonTargets.AllBuffered, SlimeDamage);
            }

            //this.GetComponent<PhotonView>().RPC("DestroyObject", PhotonTargets.AllBuffered);
        }
    }
}
