using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class ContenedorPuntoLimpio : MonoBehaviour, IDropHandler
{
    public GameManager gameManager;

    private void Start()
    {
        GameObject auxManager = GameObject.Find("GameManager");
        if(auxManager != null)
        {
            gameManager = auxManager.GetComponent<GameManager>();
        }
        else
        {
            Debug.LogError("No se encuentra el GameManager");
        }
    }

    public void OnDrop(PointerEventData eventData)
    {
        if (eventData.pointerDrag != null)
        {
            if (eventData.pointerDrag.tag == "PuntoLimpio")
            {
                Debug.Log("Has acertado");
                gameManager.Acierto();
            }
            else
            {
                Debug.Log("Has fallado");
                gameManager.Fallo();
            }
        }
        
    }
}
