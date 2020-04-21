using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class ContenedorAmarillo : MonoBehaviour, IDropHandler
{
    public GameManager gameManager;
    private CanvasGroup canvasGroup;

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

        canvasGroup = GetComponent<CanvasGroup>();
    }

    public void OnDrop(PointerEventData eventData)
    {
        if (eventData.pointerDrag != null)
        {
            if (eventData.pointerDrag.tag == "Amarillo")
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
