using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class VidasScript : MonoBehaviour
{
    public int numVidas;

    public List<Image> Lifes = new List<Image>();

    public Image lifeImagen;
    public Transform vidasInventory;

    public int maxVida;

    // Start is called before the first frame update
    void Start()
    {
        maxVida = 4;
        numVidas = maxVida;
        InstanciarVidas();
    }

    public void InstanciarVidas()
    {
        for (int i = 0; i < numVidas; i++)
        {
            Lifes[i] = Instantiate(lifeImagen, vidasInventory, false);
        }
    }

    public void AddHeart()
    {
        maxVida++;
        numVidas = maxVida;
        
        Lifes[maxVida - 1] = Instantiate(lifeImagen, vidasInventory, false);
        for (int i = 0; i < numVidas; i++)
        {
            if(Lifes[i].enabled == false)
            {
                Lifes[i].enabled = true;
            }
        }
    }

    public void DeleteHeart()
    {
        numVidas--;
        for (int i = numVidas; i >= numVidas; i--)
        {
            Lifes[i].enabled = false;
        }
    }
}
