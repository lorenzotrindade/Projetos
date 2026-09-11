/*
1. A temporada do basquete profissional nos Estados Unidos ocorre entre os meses de novembro e junho do
ano seguinte. Escreva um programa que leia um mês (um número inteiro entre 1 e 12) e escreva na tela se a
temporada está em andamento ou não.

*/

#include<stdio.h>

main () 
{
    int mes;
    printf("digite um mes  do ano de 1 a 12");
    scanf("%d",&mes);

    if(mes > 5 && mes < 12)
    {
        printf(" está na temporada");
    } 
    else 
    {
        printf("fora da temporada");
    }
}