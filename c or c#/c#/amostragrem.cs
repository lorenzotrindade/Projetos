/* exercicio 1. Escreva um programa que leia dois valores inteiros, um representando o número total de
elementos de uma amostragem, e outro representando uma fração desta amostragem. A
seguir, o programa deve calcular a porcentagem representada pela fração e retornar este valor.
*/

using UnityEngine;

public class exercicioP: MonoBehaviour

//manda a Unity criar um campo interativo no painel Inspector
[SerializeField] private int total;
[SerializeField] private int frag;

// metodo start é nossa main do c#

//void significa que essa função realiza uma ação, mas não precisa 
//devolver nenhum dado de volta para quem a chamou
void start() 
{
    calc_exebirP();
}

public void calc_exebirP()
{
    if(total == 0);
    {
    Debug.LogWarning("o valor total da amostragem não pode ser zero");    
    }

    // todo numero fracionario precisa do f ao final, se não o c# acha ser double
    float porcentagem = (frag * 100.0f) /total;

    // $ no inicio siubstitui (%f,%c,%d)
    Debug.LogWarning($" a fracao {frag} representa {porcentagem}% do total de {total}.");
}