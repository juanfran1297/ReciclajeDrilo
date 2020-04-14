using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class DragDrop : MonoBehaviour, IPointerDownHandler, IBeginDragHandler, IEndDragHandler, IDragHandler, IDropHandler
{
    [SerializeField] private Canvas canvas;
    private RectTransform rectTransform;
    private CanvasGroup canvasGroup;

    public Transform respawn;

    private void Awake()
    {
        GameObject auxRespawn = GameObject.Find("Respawn");
        if (auxRespawn!= null)
        {
            respawn = auxRespawn.GetComponent<Transform>();
        }
        else
        {
            Debug.LogError("No se encuentra el Respawn");
        }

        GameObject aux = GameObject.Find("CanvasPrincipal");
        if(aux != null)
        {
            canvas = aux.GetComponent<Canvas>();
        }
        else
        {
            Debug.LogError("No se encuentra el Canvas");
        }

        canvasGroup = GetComponent<CanvasGroup>();
        rectTransform = GetComponent<RectTransform>();
    }
    public void OnBeginDrag(PointerEventData eventData)
    {
        canvasGroup.blocksRaycasts = false;
    }

    public void OnDrag(PointerEventData eventData)
    {
        canvasGroup.alpha = .6f;
        rectTransform.anchoredPosition += eventData.delta / canvas.scaleFactor;
    }

    public void OnEndDrag(PointerEventData eventData)
    {
        canvasGroup.alpha = 1f;
        canvasGroup.blocksRaycasts = true;

        transform.position = respawn.position;
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        
    }

    public void OnDrop(PointerEventData eventData)
    {
        throw new System.NotImplementedException();
    }
}
