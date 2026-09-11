/*
3 - Escrever um programa que leia dois números inteiros e uma das operações aritméticas
básicas (através dos caracteres +, -, *, /) e a seguir realize a operação escolhida sobre estes
números, mostrando o resultado.
*/

#include<stdio.h>
main (){

float v1,v2;
int r;
char o;
printf("digite um valor inteiro: ");
scanf("%d",&v1);
printf("digite um valor inteiro: ");
scanf("%d",&v2);
printf("digite a operação aritmetica (+, -, *, /) ");
fflush(stdin);
scanf("%c",&o);

//  função fflush(stdin) é usada para limpar a memória do buffer
//de entrada de qualquer dado que ainda possa estar armazenado;
// o scanf de cima deixa lixo para o scanf de char, mesmo se eu igualar ele a 0 no inicio
// continuo

    switch(o){
        case '*':
           printf("O resultado é:", r=v1*v2);
           break;
        case '/':
           printf("O resultado é:", r=v1/v2);
           break;
        case '+':
           printf("O resultado é:", r=v1+v2);
           break;
        case '-':
           printf("O resultado é:", r=v1-v2);
           break;
        default:
            printf("resultado inesperado");
    }
}
