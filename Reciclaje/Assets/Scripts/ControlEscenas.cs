using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ControlEscenas : MonoBehaviour
{
    public void Salir()
    {
        Application.Quit();
    }

    public void YouTube()
    {
        Application.OpenURL("https://www.youtube.com/playlist?list=PLlyfq27A8_DosNPA-UMqZvEl-MYLlXn1C");
    }

    public void Reintentar()
    {
        Scene thisScene = SceneManager.GetActiveScene();
        SceneManager.LoadScene(thisScene.name);
    }
}
