using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class EleccionBasura : MonoBehaviour
{
    public Sprite[] basuraAmarilla;
    public Sprite[] basuraAzul;
    public Sprite[] basuraGris;
    public Sprite[] basuraMarron;
    public Sprite[] basuraPuntoLimpio;
    public Sprite[] basuraVerde;

    public Image thisImage;
    // Start is called before the first frame update
    void Start()
    {
        thisImage = GetComponent<Image>();

        NuevaBasura();
    }

    public void NuevaBasura()
    {
        int contenedorRandom = Random.Range(0, 6);
        switch (contenedorRandom)
        {
            case 0:
                int imagenAmarilla = Random.Range(0, basuraAmarilla.Length);
                thisImage.sprite = basuraAmarilla[imagenAmarilla];

                this.gameObject.tag = "Amarillo";
                break;
            case 1:
                int imagenAzul = Random.Range(0, basuraAzul.Length);
                thisImage.sprite = basuraAzul[imagenAzul];

                this.gameObject.tag = "Azul";
                break;
            case 2:
                int imagenGris = Random.Range(0, basuraGris.Length);
                thisImage.sprite = basuraGris[imagenGris];

                this.gameObject.tag = "Gris";
                break;
            case 3:
                int imagenMarron = Random.Range(0, basuraMarron.Length);
                thisImage.sprite = basuraMarron[imagenMarron];

                this.gameObject.tag = "Marron";
                break;
            case 4:
                int imagenPuntoLimpio = Random.Range(0, basuraPuntoLimpio.Length);
                thisImage.sprite = basuraPuntoLimpio[imagenPuntoLimpio];

                this.gameObject.tag = "PuntoLimpio";
                break;
            case 5:
                int imagenVerde = Random.Range(0, basuraVerde.Length);
                thisImage.sprite = basuraVerde[imagenVerde];

                this.gameObject.tag = "Verde";
                break;
        }
    }
}
