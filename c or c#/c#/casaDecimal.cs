/*
Escreva um programa que leia um valor ponto flutuante e arredonde este valor na segunda
casa decimal. Atenção:
 nesse caso, não é necessário considerar a norma (ABNT NBR 5891), de
modo que você escolhe como arredondar um caso em que a 
parte descartada é um 5 seguido
apenas por zeros. 
*/

using UnityEngine;

public class casaDecimal: MonoBehaviour
{
[SerializeField] private float  valor;   
    void Start()
    {
    calc_decimal();    
    }
    void Update()
    {
        
    }
    calc_decimal()
    {
    int segunda_Casa = (valor % 10 )+0.5;    
    int valor_novo=  valor + segunda_casa; 
    }

}