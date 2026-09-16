/*
 Faça um algoritmo para ler dois valores inteiros. O primeiro representa o primeiro elemento
de uma progressão aritmética, e o segundo a razão. Calcule e mostre os 10 elementos
seguintes.

*/

#include <stdio.h>

int main () {
    int v1,v2,i;
    printf("digite um valor inteiro:");
    scanf("%d",&v1);
    printf("digite um valor inteiro:");
    scanf("%d",&v2);

    // se chegou em zero, parou
    for(i=10;i>0; i--){
        v1=v1+v2;
        printf("O VALOR SEGUINTE SERÁ: %d  \n", v1);
    }
}