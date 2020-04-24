using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ControlPantallaDiploma : MonoBehaviour
{
    public GameObject video;
    public GameObject nombreYFecha;

    public AudioSource audioSource;

    // Start is called before the first frame update
    void Start()
    {
        video.SetActive(true);
        nombreYFecha.SetActive(true);
        StartCoroutine(Continuar());
    }

    public void CerrarVideo()
    {
        video.SetActive(false);
        audioSource.Play();
    }

    public void CerrarNombreYFecha()
    {
        nombreYFecha.SetActive(false);
    }

    public IEnumerator Continuar()
    {
        yield return new WaitForSeconds(14f);
        CerrarVideo();
    }
}
