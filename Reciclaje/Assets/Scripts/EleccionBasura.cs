using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class EleccionBasura : MonoBehaviour
{
    public List<Sprite> basuraAmarilla = new List<Sprite>();
    public List<Sprite> basuraAzul = new List<Sprite>();
    public List<Sprite> basuraVerde = new List<Sprite>();
    public List<Sprite> basuraPuntoLimpio = new List<Sprite>();
    public List<Sprite> basuraGris = new List<Sprite>();
    public List<Sprite> basuraMarron = new List<Sprite>();

    public Image thisImage;

    public GameObject puntoLimpio;
    public GameObject marron;
    public GameObject gris;

    public int numContenedores;
    public GameManager gameManager;
    // Start is called before the first frame update
    void Start()
    {
        thisImage = GetComponent<Image>();
        numContenedores = 3;
        NuevaBasura();

        GameObject auxManager = GameObject.Find("GameManager");
        if (auxManager != null)
        {
            gameManager = auxManager.GetComponent<GameManager>();
        }
        else
        {
            Debug.LogError("No se encuentra el GameManager");
        }

        puntoLimpio = GameObject.Find("Contenedor PuntoLimpio");
        if(puntoLimpio != null)
        {
            puntoLimpio.SetActive(false);
        }
        else
        {
            Debug.LogError("No se encuentra el contenedor PuntoLimpio");
        }

        marron = GameObject.Find("Contenedor Marron");
        if (marron != null)
        {
            marron.SetActive(false);
        }
        else
        {
            Debug.LogError("No se encuentra el contenedor Marron");
        }

        gris = GameObject.Find("Contenedor Gris");
        if(gris != null)
        {
            gris.SetActive(false);
        }
        else
        {
            Debug.LogError("No se encuentra el Contenedor Gris");
        }
    }
    private void Update()
    {
        if(gameManager.puntos >= 0 && gameManager.puntos < 25)
        {
            numContenedores = 3;
        }
        if(gameManager.puntos >= 25 && gameManager.puntos < 50)
        {
            numContenedores = 4;
            puntoLimpio.SetActive(true);
        }
        if (gameManager.puntos >= 50)
        {
            numContenedores = 6;
            gris.SetActive(true);
            marron.SetActive(true);
        }
    }
    public void NuevaBasura()
    {
        int contenedorRandom = Random.Range(0, numContenedores);
        switch (contenedorRandom)
        {
            case 0:
                if(basuraAmarilla.Count < 1)
                {
                    NuevaBasura();
                }
                else
                {
                    int imagenAmarilla = Random.Range(0, basuraAmarilla.Count);
                    thisImage.sprite = basuraAmarilla[imagenAmarilla];
                    basuraAmarilla.Remove(basuraAmarilla[imagenAmarilla]);
                    this.gameObject.tag = "Amarillo";
                }
                break;
            case 1:
                if(basuraAzul.Count < 1)
                {
                    NuevaBasura();
                }
                else
                {
                    int imagenAzul = Random.Range(0, basuraAzul.Count);
                    thisImage.sprite = basuraAzul[imagenAzul];
                    basuraAzul.Remove(basuraAzul[imagenAzul]);
                    this.gameObject.tag = "Azul";
                }
                break;
            case 2:
                if(basuraVerde.Count < 1)
                {
                    NuevaBasura();
                }
                else
                {
                    int imagenVerde = Random.Range(0, basuraVerde.Count);
                    thisImage.sprite = basuraVerde[imagenVerde];
                    basuraVerde.Remove(basuraVerde[imagenVerde]);
                    this.gameObject.tag = "Verde";
                }
                break;
            case 3:
                if(basuraPuntoLimpio.Count < 1)
                {
                    NuevaBasura();
                }
                else
                {
                    int imagenPuntoLimpio = Random.Range(0, basuraPuntoLimpio.Count);
                    thisImage.sprite = basuraPuntoLimpio[imagenPuntoLimpio];
                    basuraPuntoLimpio.Remove(basuraPuntoLimpio[imagenPuntoLimpio]);
                    this.gameObject.tag = "PuntoLimpio";
                }
                break;
            case 4:
                if(basuraMarron.Count < 1)
                {
                    NuevaBasura();
                }
                else
                {
                    int imagenMarron = Random.Range(0, basuraMarron.Count);
                    thisImage.sprite = basuraMarron[imagenMarron];
                    basuraMarron.Remove(basuraMarron[imagenMarron]);
                    this.gameObject.tag = "Marron";
                }
                break;
            case 5:
                if(basuraGris.Count < 1)
                {
                    NuevaBasura();
                }
                else
                {
                    int imagenGris = Random.Range(0, basuraGris.Count);
                    thisImage.sprite = basuraGris[imagenGris];
                    basuraGris.Remove(basuraGris[imagenGris]);
                    this.gameObject.tag = "Gris";
                }
                break;
        }
    }
}
