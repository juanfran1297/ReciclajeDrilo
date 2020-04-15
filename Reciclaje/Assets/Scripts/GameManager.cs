using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR;

public class GameManager : MonoBehaviour
{
    public int puntos;
    public Text txtPuntos;
    public Text txtPuntosFinal;

    public GameObject basura;
    public EleccionBasura eleccionBasura;
    public Transform respawn;
    public Timer timer;

    public Text txtAciertoFallo;
    public AudioSource audioSource;
    public AudioClip audioAcierto;
    public AudioClip audioFallo;

    public GameObject diploma;
    public GameObject tryAgain;

    public PointBarScript pointBar;

    public Animator driloAnim;

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
        tryAgain = GameObject.Find("TryAgain");
        if(tryAgain != null)
        {
            tryAgain.SetActive(false);
        }
        else
        {
            Debug.LogError("No se encuentra TryAgain");
        }

        txtAciertoFallo.enabled = false;
        puntos = 0;
        audioSource = GetComponent<AudioSource>();

        basura = GameObject.Find("Basura");
        if(basura != null)
        {
            eleccionBasura = basura.GetComponent<EleccionBasura>();
        }
        else
        {
            Debug.LogError("No se encuentra la basura");
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

        pointBar.SetMinPoint(puntos);
    }

    // Update is called once per frame
    void Update()
    {
        txtPuntos.text = puntos.ToString();
        txtPuntosFinal.text = puntos.ToString();
        if(puntos >= 100)
        {
            timer.enabled = false;
            diploma.SetActive(true);
        }

        if(timer.derrota == true)
        {
            timer.enabled = false;
            tryAgain.SetActive(true);
        }
    }
    #endregion

    #region FuncionesAciertoFallo
    public void Acierto()
    {
        StartCoroutine(TextoAcierto());
        puntos++;
        timer.tiempo += 5;
        pointBar.SetPoint(puntos);
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
        driloAnim.SetBool("Acierto", true);
        //txtAciertoFallo.color = Color.green;
        //txtAciertoFallo.text = "V";
        //txtAciertoFallo.enabled = true;

        yield return new WaitForSeconds(.33f);
        driloAnim.SetBool("Acierto", false);
        txtAciertoFallo.enabled = false;
    }

    public IEnumerator TextoFallo()
    {
        audioSource.PlayOneShot(audioFallo);
        driloAnim.SetBool("Fallo", true);
        //txtAciertoFallo.color = Color.red;
        //txtAciertoFallo.text = "X";
        //txtAciertoFallo.enabled = true;

        yield return new WaitForSeconds(.33f);
        driloAnim.SetBool("Fallo", false);
        txtAciertoFallo.enabled = false;
    }
    #endregion
}
