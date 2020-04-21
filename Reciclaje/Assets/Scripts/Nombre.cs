using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Nombre : MonoBehaviour
{
    public InputField ponerNombre;
    public Text nombre;

    public Dropdown ponerDia;
    public Dropdown ponerMes;
    public Dropdown ponerYear;
    public Text dia;
    public Text mes;
    public Text year;

    public void NombreFinal()
    {
        nombre.text = ponerNombre.text;
    }

    public void Fecha()
    {
        dia.text = ponerDia.captionText.text;
        mes.text = ponerMes.captionText.text;
        year.text = ponerYear.captionText.text;
    }
}
