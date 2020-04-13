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

        tiempoMaximo = 100f;
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

        if ((tiempo <= 100 || tiempo > 100) && tiempo > 70)
        {
            crono.color = gradient.Evaluate(1f);
            tiempoText.color = gradient.Evaluate(1f);
        }

        if (tiempo <= 70 && tiempo > 50)
        {
            crono.color = gradient.Evaluate(.9f);
            tiempoText.color = gradient.Evaluate(.9f);
        }

        if (tiempo <= 50 && tiempo > 30)
        {
            crono.color = gradient.Evaluate(.6f);
            tiempoText.color = gradient.Evaluate(.6f);
        }

        if (tiempo <= 30 && tiempo > 15)
        {
            crono.color = gradient.Evaluate(.3f);
            tiempoText.color = gradient.Evaluate(.3f);
        }

        if (tiempo <= 15 && tiempo > -1)
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
