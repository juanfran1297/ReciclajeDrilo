using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ControlPantallaDiploma : MonoBehaviour
{
    public GameObject video;
    public GameObject nombreYFecha;

    // Start is called before the first frame update
    void Start()
    {
        //video = GameObject.Find("VideoFondo");
        //if (video != null)
        //{
            video.SetActive(true);
        //}
        //else Debug.LogError("No se encuentra el video correspondiente, asegurate de que haya un GameObject 'Video Fondo' en la escena");

        //nombreYFecha = GameObject.Find("NombreYFechaFondo");
        //if (nombreYFecha != null)
        //{
            nombreYFecha.SetActive(true);
        //}
        //else Debug.LogError("No se encuentra el video correspondiente, asegurate de que haya un GameObject 'NombreYFechaFondo' en la escena");
    }

    public void CerrarVideo()
    {
        video.SetActive(false);
    }

    public void CerrarNombreYFecha()
    {
        nombreYFecha.SetActive(false);
    }
}
