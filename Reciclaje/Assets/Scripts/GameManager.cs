using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    public int puntos;
    public Text txtPuntos;
    public Text txtPuntosFinal;

    private GameObject basura;
    private GameObject siguienteNivel;
    private EleccionBasura eleccionBasura;
    private Transform respawn;
    private Timer timer;
    private VidasScript vidasScript;

    public Sprite[] imagenFondos;
    private Image fondo;

    private AudioSource audioSource;
    public AudioClip audioEmpezar;
    public AudioClip audioAcierto;
    public AudioClip audioFallo;
    public AudioClip audioSiguienteNivel;

    private GameObject tryAgain;
    private GameObject victoria;
    private GameObject juego;

    public Animator driloAnim;

    #region StartUpdate
    // Start is called before the first frame update
    void Start()
    {
        siguienteNivel = GameObject.Find("SiguienteNivel");
        if(siguienteNivel != null)
        {
            siguienteNivel.SetActive(false);
        }
        else
        {
            Debug.LogError("No se encuentra siguiente Nivel, asegurate de que está en la escena");
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

        victoria = GameObject.Find("CanvasVictoria");
        if (victoria != null)
        {
            victoria.SetActive(false);
        }
        else
        {
            Debug.LogError("No se encuentra 'CanvasVictoria', asegurate de que está en la escena");
        }

        juego = GameObject.Find("CanvasPrincipal");
        if (juego != null)
        {
            juego.SetActive(true);
        }
        else
        {
            Debug.LogError("No se encuentra 'CanvasPrincipal', asegurate de que está en la escena");
        }

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

        GameObject auxFondo = GameObject.Find("Fondo");
        if(auxFondo != null)
        {
            fondo = auxFondo.GetComponent<Image>();
        }
        else
        {
            Debug.LogError("No se ha encontrado el Fondo, asegurate de que en las escena hay un GameObject llamado Fondo");
        }

        vidasScript = GetComponent<VidasScript>();
        timer = GetComponent<Timer>();


        StartCoroutine(SonidoEmpezar());
    }

    // Update is called once per frame
    void Update()
    {
        txtPuntos.text = puntos.ToString();
        txtPuntosFinal.text = puntos.ToString();
        if(puntos >= 100)
        {
            vidasScript.enabled = false;
            timer.enabled = false;
            victoria.SetActive(true);
            juego.SetActive(false);
        }

        if(timer.derrota == true || vidasScript.numVidas <= 0)
        {
            vidasScript.enabled = false;
            timer.enabled = false;
            tryAgain.SetActive(true);
        }

        switch (puntos)
        {
            case 0:
                Debug.Log("Nuevo Fondo");
                fondo.sprite = imagenFondos[0];
                break;
            case 25:
                fondo.sprite = imagenFondos[1];
                Debug.Log("Nuevo Fondo");
                break;
            case 50:
                fondo.sprite = imagenFondos[2];
                Debug.Log("Nuevo Fondo");
                break;
            case 70:
                fondo.sprite = imagenFondos[3];
                Debug.Log("Nuevo Fondo");
                break;
        }
    }
    #endregion

    #region FuncionesAciertoFallo
    public void Acierto()
    {
        StartCoroutine(TextoAcierto());
        puntos++;
        timer.tiempo += 5;
        if(puntos == 25 || puntos == 50 || puntos == 70)
        {
            GanarSiguienteNivel();
        }
        else
        {
            basura.transform.position = respawn.position;
            eleccionBasura.NuevaBasura();
        }
    }

    public void Fallo()
    {
        timer.tiempo -= 5;
        vidasScript.DeleteHeart();
        StartCoroutine(TextoFallo());
        basura.transform.position = respawn.position;
    }
    public void GanarSiguienteNivel()
    {
        vidasScript.AddHeart();
        audioSource.Stop();
        audioSource.volume = .3f;
        audioSource.PlayOneShot(audioSiguienteNivel);
        siguienteNivel.SetActive(true);
        timer.enabled = false;
        basura.GetComponent<Image>().enabled = false;
    }
    public void NextLevel()
    {
        audioSource.Stop();
        siguienteNivel.SetActive(false);
        audioSource.volume = .08f;
        timer.enabled = true;
        basura.transform.position = respawn.position;
        eleccionBasura.AparicionBasura(puntos);
        eleccionBasura.NuevaBasura();
        basura.GetComponent<Image>().enabled = true;
    }
    #endregion

    public IEnumerator SonidoEmpezar()
    {
        driloAnim.enabled = false;
        timer.enabled = false;
        basura.GetComponent<Image>().enabled = false;
        audioSource.volume = .3f;
        audioSource.PlayOneShot(audioEmpezar);

        yield return new WaitForSeconds(8);

        driloAnim.enabled = true;
        timer.enabled = true;
        basura.GetComponent<Image>().enabled = true;
        audioSource.volume = .08f;
    }

    #region TextoAciertoFallo
    public IEnumerator TextoAcierto()
    {
        audioSource.PlayOneShot(audioAcierto);
        driloAnim.SetBool("Acierto", true);

        yield return new WaitForSeconds(.33f);
        driloAnim.SetBool("Acierto", false);
    }

    public IEnumerator TextoFallo()
    {
        audioSource.PlayOneShot(audioFallo);
        driloAnim.SetBool("Fallo", true);

        yield return new WaitForSeconds(.33f);
        driloAnim.SetBool("Fallo", false);
    }
    #endregion
}
