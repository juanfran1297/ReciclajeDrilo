using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Nombre : MonoBehaviour
{
    public InputField ponerNombre;
    public Text nombre;
    public InputField ponerCiudad;
    public Text ciudad;
    public InputField ponerEdad;
    public Text edad;

    public Dropdown ponerDia;
    public Dropdown ponerMes;
    public Text dia;
    public Text mes;

    public void NombreFinal()
    {
        nombre.text = ponerNombre.text;
        edad.text = ponerEdad.text;
        ciudad.text = ponerCiudad.text;
    }

    public void Fecha()
    {
        dia.text = ponerDia.captionText.text;
        mes.text = ponerMes.captionText.text;
    }
}
