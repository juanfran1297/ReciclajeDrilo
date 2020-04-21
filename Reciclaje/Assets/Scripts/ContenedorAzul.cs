using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class ContenedorAzul : MonoBehaviour, IDropHandler
{
    public GameManager gameManager;

    private void Start()
    {
        GameObject auxManager = GameObject.Find("GameManager");
        if (auxManager != null)
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
            if (eventData.pointerDrag.tag == "Azul")
            {
                gameManager.Acierto();
            }
            else
            {
                gameManager.Fallo();
            }
        }
    }
}
