/*
3. Escreva um programa para ler o número de eleitores de um município e calcular quantos
votos garantem que um candidato vença no primeiro turno (deve ser mais do que 50%).
*/

using UnityEngine;

public class eleitores : MonoBehaviour 
// estou dizendo que a classe eleitores é filha da monobehaviour,
// ai ela pega os atributos, é OBRIGATORIO
{

    // SerializeFiel tem o L em minusculo
    [SerializeField] private int eleitores;
    [SerializeField]private int votos;

    void Start() 
    {
        calc_1turno();
    }

    void calc_1turno()
    {
        /* pedindo pro user digitar um valor
        int votos = Console.ReadLine();
        */

        // usando ; aqui no if, o coisa vai achar q o bloco acabou, assim o else fica orfão
        // para alguem vencer ele tem q ser a metade +1
        if (votos > (eleitores/2))
        {
            Debug.LogWarning("Ganhou no primeiro turno");
        }
        else {
            Debug.LogWarning("Tem menos da metade dos votos");
        }

    }
}

