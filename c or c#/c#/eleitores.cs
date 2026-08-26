/*
3. Escreva um programa para ler o número de eleitores de um município e calcular quantos
votos garantem que um candidato vença no primeiro turno (deve ser mais do que 50%).
*/

using UnityEngine;

[SeriaLizeField] private int eleitores;

void Start() 
{
    calc_1turno();
}

void calc_1turno()
{
    m= eleitores / 2;
    if (eleitores > m);
    {
        Debug.LogWarning("Ganhou no primeiro turno");
    }
    else {
         Debug.LogWarning("Tem menos da metade dos votos");
    }

}

