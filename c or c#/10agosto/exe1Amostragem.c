/* exercicio 1. Escreva um programa que leia dois valores inteiros, um representando o número total de
elementos de uma amostragem, e outro representando uma fração desta amostragem. A
seguir, o programa deve calcular a porcentagem representada pela fração e retornar este valor.
*/


#include<stdio.h>

int main()
{
    int total, frag;
    float porcentagem;

    printf("digite o valor total");
    scanf("%d",&total);
    printf("digite valor de uma fração: ");
    scanf("%d",&frag);

    porcentagem= (frag * 100.0) / total;
    
    // 2%% consigo colocar em frag
    printf("o valor da fração representa %f%%",porcentagem);
}
