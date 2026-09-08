/*
1. Faça um algoritmo para ler dois valores inteiros. O primeiro representa o primeiro elemento
de uma progressão aritmética, e o segundo a razão. Calcule e mostre os 10 elementos
seguintes.

*/

#include <stdio.h>

 int main (){


    int v1,v2, atual=0,c=0;
    printf("digite o primeiro valor inteiro: ");
    scanf("%d",&v1);
    printf("digite a razão valor inteiro: ");
    scanf("%d",&v2);

    // printf("o primeiro valor da serie é: %d",v1) para isso aguardo ele numa variavel.. não posso começar dentro dele
    atual = v1;
    for(c = 9; c >= 0; c--){
        atual  +=v2;
        printf("o proximo resultado  da serie será: %d \n", atual);
    }

    /*
    até aqui conseguimos faer sabendo até onde a razão vai e como ela cresce.. mas agr nao sei como definir por qual numero a serie começa e apartir dele começampos a soma..
    */
    
}