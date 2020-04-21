using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class buttonScript : MonoBehaviour
{
    public GameObject ayuda;
    public GameObject atras;
    public GameObject musica;
    public GameObject fx;
    public GameObject ajustes;
    public GameObject volverAjustes;

    private void Start()
    {
        ayuda.SetActive(false);
        atras.SetActive(false);
        musica.SetActive(false);
        fx.SetActive(false);
        volverAjustes.SetActive(false);
        ajustes.SetActive(true);
    }

    public void BotonesOn()
    {
        ayuda.SetActive(true);
        atras.SetActive(true);
        musica.SetActive(true);
        fx.SetActive(true);
        volverAjustes.SetActive(true);
        ajustes.SetActive(false);
    }

    public void BotonesOff()
    {
        ayuda.SetActive(false);
        atras.SetActive(false);
        musica.SetActive(false);
        fx.SetActive(false);
        volverAjustes.SetActive(false);
        ajustes.SetActive(true);
    }
}
