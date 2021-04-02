using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class slimeMovement : Photon.MonoBehaviour
{
    [SerializeField] Transform target;

    private NavMeshAgent agent;
    public PhotonView photonView;
    public Animator anim;

    void Start()
    {
        target = GameObject.FindGameObjectWithTag("Player").transform;

        agent = GetComponent<NavMeshAgent>();
        agent.updateRotation = false;
        agent.updateUpAxis = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (this){
            agent.SetDestination(target.position);
            anim.SetBool("isRunning", true);
        }
        else{
            Debug.Log("slime is null");
        }
    }
}
