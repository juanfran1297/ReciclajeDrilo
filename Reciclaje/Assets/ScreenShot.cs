using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScreenShot : MonoBehaviour
{
    public AudioSource sonidoFoto;

    public GameObject botones;

    private void Start()
    {
        botones = GameObject.Find("Botones");
        if(botones != null)
        {
            botones.SetActive(true);
        }
        else
        {
            Debug.LogError("No se encuentras el GameObject 'Botones', asegurate de que está en la escena");
        }

        sonidoFoto = GetComponent<AudioSource>();
    }

    public void DoScreenshot()
    {
        botones.SetActive(false);
        StartCoroutine(TakeScreenshotAndSave());
        sonidoFoto.Play();
        StartCoroutine(Wait());
    }

    private IEnumerator TakeScreenshotAndSave()
    {
        yield return new WaitForEndOfFrame();

        Texture2D ss = new Texture2D(Screen.width, Screen.height, TextureFormat.RGB24, false);
        ss.ReadPixels(new Rect(0, 0, Screen.width, Screen.height), 0, 0);
        ss.Apply();

        // Save the screenshot to Gallery/Photos
        Debug.Log("Permission result: " + NativeGallery.SaveImageToGallery(ss, "ReciclaConDrilo", "ImagenDiploma.png"));
        NativeGallery.SaveImageToGallery(ss, "ReciclaConDrilo", "ImagenDiploma.png");

        // To avoid memory leaks
        Destroy(ss);
    }

    IEnumerator Wait()
    {
        yield return new WaitForSeconds(1f);
        botones.SetActive(true);
    }
}
