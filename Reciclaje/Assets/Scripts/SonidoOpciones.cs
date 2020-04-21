using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SonidoOpciones : MonoBehaviour
{
    public static SonidoOpciones sonidoOpciones = null;

    public AudioSource musica;
    public AudioSource fx;

    public Button buttonMusicaOnOff;
    public Button buttonFxOnOff;

    public Sprite musicaOnImage;
    public Sprite musicaOffImage;

    public Sprite fxOnImage;
    public Sprite fxOffImage;
    private void Awake()
    {
        if (sonidoOpciones == null)
        {
            sonidoOpciones = this;
        }
        else if (sonidoOpciones != this)
        {
            Destroy(gameObject);
        }
    }
    // Start is called before the first frame update
    void Start()
    {
        musica = GetComponent<AudioSource>();
        GameObject aux = GameObject.Find("GameManager"); 
        if(aux != null)
        {
            fx = aux.GetComponent<AudioSource>();
        }
        else
        {
            Debug.LogError("No se encuentra el GameManager para los fx");
        }
    }

    //private void Update()
    //{
    //    GameObject aux = GameObject.Find("buttonMúsicaOnOff");
    //    if(aux != null)
    //    {
    //        buttonMusicaOnOff = aux.GetComponent<Button>();
    //    }
    //}

    public void MusicaOnOff()
    {
        musica.enabled = !musica.enabled;
        if (musica.enabled == true)
        {
            buttonMusicaOnOff.GetComponent<Image>().sprite = musicaOnImage;
        }
        else buttonMusicaOnOff.GetComponent<Image>().sprite = musicaOffImage;
    }

    public void FxOnOff()
    {
        fx.enabled = !fx.enabled;
        if (fx.enabled == true)
        {
            buttonFxOnOff.GetComponent<Image>().sprite = fxOnImage;
        }
        else buttonFxOnOff.GetComponent<Image>().sprite = fxOffImage;
    }
}
