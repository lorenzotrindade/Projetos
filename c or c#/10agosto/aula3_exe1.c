/*
1. Escreva um programa que leia dois valores inteiros, um representando o número total de
elementos de uma amostragem, e outro representando uma fração desta amostragem. A
seguir, o programa deve calcular a porcentagem representada pela fração e retornar este valor.
*/

#include<stdio.h>

main ()
{
    int amostragem,v1,v2;
    

    printf("digite o valor da amostragem:");
    scanf("%d",&v1);
    printf("digite o valor da fração:")
    scanf("%d",&v2);

    amostragem =  (v2 *100) /v1;
    printf("o valor de amostragem é %d ", amostragem);
}