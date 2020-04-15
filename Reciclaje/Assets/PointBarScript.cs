using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PointBarScript : MonoBehaviour
{
    public Slider slider;
    public Gradient gradient;
    public Image fill;

    public void SetMinPoint(int point)
    {
        slider.minValue = point;
        slider.value = point;

        fill.color = gradient.Evaluate(0f);
    }

    private void Start()
    {
        slider = GetComponent<Slider>();
    }

    public void SetPoint(int point)
    {
        slider.value = point;

        fill.color = gradient.Evaluate(slider.normalizedValue);
    }
}
