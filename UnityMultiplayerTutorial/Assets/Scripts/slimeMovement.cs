using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class slimeMovement : Photon.MonoBehaviour
{
    private GameObject target;
    private Transform targetTrans;
    private NavMeshAgent agent;
    private PhotonView photonView;
    public GameObject slime;
    public Animator anim;
    public List<GameObject> targetList;

    void Start()
    {
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
        target = targetList[random];
        targetTrans = target.transform;

        agent = GetComponent<NavMeshAgent>();
        agent.updateRotation = false;
        agent.updateUpAxis = false;
    } 

    void Update()
    {
        // check if slime is null
        if (slime != null){
            // if target is alive, chase target
            if(target.GetComponent<Health>().alive){
                if(GameManager.Instance.ConfirmStartTimer){
                    agent.SetDestination(targetTrans.position);
                    anim.SetBool("isRunning", true);
                }
            }
            // otherwise destroy slime
            else {
                PhotonNetwork.Destroy(slime);
            }
        }
        else{
            Debug.Log("slime is null");
        }
    }
}
