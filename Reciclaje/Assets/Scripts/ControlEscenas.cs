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

    //public void YouTube()
    //{
    //    Application.OpenURL("https://www.youtube.com/channel/UCNhDul0FTn2yQTpJTALoOwQ");
    //}

    //public void OpenWeb()
    //{
    //    Application.OpenURL("https://www.lapandilladedrilo.com/");
    //}

    public void Reintentar()
    {
        Scene thisScene = SceneManager.GetActiveScene();
        SceneManager.LoadScene(thisScene.name);
    }

    public void Jugar()
    {
        SceneManager.LoadScene("Juego");
    }

    public void Menu()
    {
        SceneManager.LoadScene("MenuPrincipal");
    }
}
