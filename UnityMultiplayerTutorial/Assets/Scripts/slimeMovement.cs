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
    public List<GameObject> targetList;

    void Start()
    {
        // targetPos = GameObject.FindGameObjectWithTag("Player").transform;
        var photonViews = UnityEngine.Object.FindObjectsOfType<PhotonView>();
        foreach (var view in photonViews)
        {
            var player = view.owner;
            //Objects in the scene don't have an owner, its means view.owner will be null
            if(player!=null){
                var playerPrefabObject = view.gameObject;
                if(playerPrefabObject.GetComponent<Player>()){
                    if(!playerPrefabObject.GetComponent<Player>().isDragon){
                        targetList.Add(playerPrefabObject);
                    }
                } 
            }  
        }
        int random = Random.Range(0,  targetList.Count-1);
        target = targetList[random].transform;
        Debug.Log(target.position);

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
