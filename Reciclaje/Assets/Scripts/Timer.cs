using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Timer : MonoBehaviour
{
    public Text tiempoText;
    public Image crono;
    public float tiempoMaximo;
    public float tiempo;

    public Gradient gradient;

    public bool derrota;


    private void Start()
    {
        tiempoText = GameObject.Find("TXT_Timer").GetComponent<Text>();
        crono = GameObject.Find("CronoFill").GetComponent<Image>();

        tiempoMaximo = 60f;
        tiempo = tiempoMaximo;

        derrota = false;
    }

    // Update is called once per frame
    void Update()
    {

        tiempo -= Time.deltaTime;
        tiempo = Mathf.Clamp(tiempo, 0, tiempoMaximo);
        crono.fillAmount = tiempo / tiempoMaximo;
        tiempoText.text = "" + tiempo.ToString("f0");

        if ((tiempo <= 60 || tiempo > 60) && tiempo > 40)
        {
            crono.color = gradient.Evaluate(1f);
            tiempoText.color = gradient.Evaluate(1f);
        }

        if (tiempo <= 40 && tiempo > 20)
        {
            crono.color = gradient.Evaluate(.4f);
            tiempoText.color = gradient.Evaluate(.4f);
        }

        if (tiempo <= 20 && tiempo > 10)
        {
            crono.color = gradient.Evaluate(.2f);
            tiempoText.color = gradient.Evaluate(.2f);
        }

        if (tiempo <= 10 && tiempo > -1)
        {
            crono.color = gradient.Evaluate(.1f);
            tiempoText.color = gradient.Evaluate(.1f);
        }

        if (tiempo <= 0)
        {
            derrota = true;
        }
    }
}
