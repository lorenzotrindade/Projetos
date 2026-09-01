/*
3. Escreva um programa para ler o número de eleitores de um município e calcular quantos
votos garantem que um candidato vença no primeiro turno (deve ser mais do que 50%).
*/

using UnityEngine;

public class eleitores : MonoBehaviour 
// estou dizendo que a classe eleitores é filha da monobehaviour,
// ai ela pega os atributos, é OBRIGATORIO
{

    
     private int eleitores;
     private int votos = 0;

    void Start() 
    {
        
    }

    void Update()
    {
        if(Input.GetKey(KeyCode.RightArrow))
        {
            voto +=1;
            calc_1turno(); 
        }
        if(Input.GetKey(KeyCode.LeftArrow))
        {
        voto -=1;
            if(votos <= 0)
             {votos = 0;}

        calc_1turno();    
        }   
    }

    void calc_1turno()
    {
        /* pedindo pro user digitar um valor
        int votos = Console.ReadLine();
        */
        // usando ; aqui no if, o coisa vai achar q o bloco acabou, assim o else fica orfão
        // para alguem vencer ele tem q ser a metade +1
        if (eleitores != 0 )
        {
            votosVencer = (eleitores /2)+1
            if(votos >= votosVencer)
            {
            Debug.LogWarning("Ganhou no primeiro turno");
            }
            else 
            {
                Debug.LogWarning("perdeu");
            }
        }
    }
}

