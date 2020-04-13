using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class ContenedorPuntoLimpio : MonoBehaviour, IDropHandler
{
    public GameObject basura;
    public Transform respawn;

    public EleccionBasura eleccionBasura;
    public Timer timer;

    private void Start()
    {
        basura = GameObject.Find("Basura");
        GameObject aux = GameObject.Find("Respawn");
        if(aux != null)
        {
            respawn = aux.GetComponent<Transform>();
        }
        else
        {
            Debug.LogError("No se encuentra el Respawn");
        }

        GameObject auxEleccion = GameObject.Find("Basura");
        if(auxEleccion != null)
        {
            eleccionBasura = auxEleccion.GetComponent<EleccionBasura>();
        }
        else
        {
            Debug.LogError("No se encuentra el Script EleccionBasura");
        }

        GameObject auxTimer = GameObject.Find("GameManager");
        if(auxTimer != null)
        {
            timer = auxTimer.GetComponent<Timer>();
        }
        else
        {
            Debug.LogError("No se encuentra el Script Timer");
        }
    }

    public void OnDrop(PointerEventData eventData)
    {
        if (eventData.pointerDrag != null)
        {
            if (eventData.pointerDrag.tag == "PuntoLimpio")
            {
                Debug.Log("Has acertado");
                timer.tiempo += 5;
                basura.transform.position = respawn.position;
                eleccionBasura.NuevaBasura();
            }
            else
            {
                Debug.Log("Has fallado");
                timer.tiempo -= 5;
                basura.transform.position = respawn.position;
            }
        }
        
    }
}
