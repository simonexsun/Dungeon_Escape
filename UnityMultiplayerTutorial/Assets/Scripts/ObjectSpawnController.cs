using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectSpawnController : MonoBehaviour
{

    public GameObject[] objects;

    void Start()
    {
        int rand = Random.Range(0, objects.Length);
        PhotonNetwork.Instantiate(objects[rand].name, new Vector2(this.transform.position.x, this.transform.position.y), Quaternion.identity, 0);

        // Debug.Log("spawning objects: " + objects[rand].name);
    }

}
