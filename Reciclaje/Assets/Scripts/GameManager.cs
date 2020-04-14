using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    public int puntos;
    public Text txtPuntos;

    public GameObject basura;
    public EleccionBasura eleccionBasura;
    public Transform respawn;
    public Timer timer;

    public Text txtAciertoFallo;
    public AudioSource audioSource;
    public AudioClip audioAcierto;
    public AudioClip audioFallo;

    public GameObject diploma;

    #region StartUpdate
    // Start is called before the first frame update
    void Start()
    {
        diploma = GameObject.Find("Diploma");
        if(diploma != null)
        {
            diploma.SetActive(false);
        }
        else
        {
            Debug.LogError("No se encuentra el diploma");
        }
        txtAciertoFallo.enabled = false;
        puntos = 0;
        audioSource = GetComponent<AudioSource>();
        basura = GameObject.Find("Basura");
        if(basura != null)
        {
            eleccionBasura = basura.GetComponent<EleccionBasura>();
        }
        GameObject aux = GameObject.Find("Respawn");
        if (aux != null)
        {
            respawn = aux.GetComponent<Transform>();
        }
        else
        {
            Debug.LogError("No se encuentra el Respawn");
        }
        timer = GetComponent<Timer>();
    }

    // Update is called once per frame
    void Update()
    {
        txtPuntos.text = puntos.ToString();
        if(puntos >= 100)
        {
            timer.enabled = false;
            diploma.SetActive(true);
        }
    }
    #endregion

    #region FuncionesAciertoFallo
    public void Acierto()
    {
        StartCoroutine(TextoAcierto());
        puntos++;
        timer.tiempo += 5;
        basura.transform.position = respawn.position;
        eleccionBasura.NuevaBasura();
    }

    public void Fallo()
    {
        timer.tiempo -= 5;
        StartCoroutine(TextoFallo());
        basura.transform.position = respawn.position;
    }
    #endregion

    #region TextoAciertoFallo
    public IEnumerator TextoAcierto()
    {
        audioSource.PlayOneShot(audioAcierto);
        txtAciertoFallo.color = Color.green;
        txtAciertoFallo.text = "V";
        txtAciertoFallo.enabled = true;

        yield return new WaitForSeconds(1);
        txtAciertoFallo.enabled = false;
    }

    public IEnumerator TextoFallo()
    {
        audioSource.PlayOneShot(audioFallo);
        txtAciertoFallo.color = Color.red;
        txtAciertoFallo.text = "X";
        txtAciertoFallo.enabled = true;

        yield return new WaitForSeconds(1);
        txtAciertoFallo.enabled = false;
    }
    #endregion
}
