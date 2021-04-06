using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuAudio : MonoBehaviour
{
    AudioSource audioSource;
    public AudioClip select1;
    public AudioClip select2;
    void Start()
    {
        audioSource = GetComponent<AudioSource>();
    }
    public void Beep1()
    {
        audioSource.PlayOneShot(select1, 1f);
    }

    public void Beep2()
    {
        audioSource.PlayOneShot(select2, 1f);
    }
}
