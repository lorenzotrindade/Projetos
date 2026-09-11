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
// sem serialize, pq eu não controlo mais
private float valorUser = 0.0f;  

    void Start()
    {
    calc_decimal();    
    }
    void Update()
    {
        // seta para a direita
        if(Input.GetKey(KeyCode.RightArrow))
        {
            // não entendi.. aumenta conforme ele segura a seta?
            valorUser+= 1.0f*Time.DeltaTime;
            calc_decimal();    
        }
        if(Input.GetKey(KeyCode.LeftArrow))
        {
            valorUser -= 1.0f*Time.DeltaTime
            calc_decimal();
        }
    }
    // esqueceu de tipar, void para  função sem vazia
     void calc_decimal()
    {
    float nValor = (int) (valorUser*100f + 0.5f)/100f;
    Debug.Log($"o valor gerado será {nValor}");
    /*
    digamos valor *100 gera x
    x  soma com 0.5f
     nesse momento já arredondei
     o int converte tudo
    */


    }

}

/* em C# seria isso? fico na duvida de como converser para inr um numero que antes era inteiro.. apenas que a ideia
é apenas arredondar a segunda casa
outra coisa.. como pedi a gente tem que treinar as outras formas de fazer o o usuario dar valores
porque apartir de agora o usuario daria valores pelo teclado e depois posteriormente seria pelo ouclos de realidade virtual
bom.. precisamos aprender c# 
*/