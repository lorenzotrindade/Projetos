/*
Escreva um programa que leia três valores inteiros 
assumindo que cada um deles só pode ser **0** ou **1**
 e, a seguir, informe na tela se todos valores lidos
  são iguais a 0, se todos são iguais a 1 ou,
   se os dois valores possíveis ocorreram, 
   qual ocorre mais vezes
*/

#include <stdio.h> 
int main(void) {
    int v1,v2,v3;
    int soma=0;

    printf("digite um valor, seja ele 0 ou 1: \n");
    scanf("%d",&v1);
    printf("digite um valor, seja ele 0 ou 1: \n");
    scanf("%d",&v2);    
    printf("digite um valor, seja ele 0 ou 1: \n");
    scanf("%d",&v3);
    
    soma= v1+v2+v3;

    if(soma == 0)
         printf("Todos são iguais a 0\n");
    else if(soma==3)
        printf("Todos são iguais a 1\n");
    else if(soma==2)
        printf("O valor 1  ocorre mais vezes\n");    
    else {
        printf("o valor 0 ocorre mais vezes\n");
    }
}

// exatamente a anotação q vc colocou o professor colocou tbm.. eu li algo como qual o valor de cada variavel.. 
//mas o user nem sabe o que pe variavel.. sí q  quer saber quais valores   se todos são 0 ou1 e qual aparece mais..
// basicamente eu nem respondi o que ele pedoiu nessa questão.. acho q foia até gentiliza dele considerar o que eu fiz antes.. 
// q foi basicamente isso.. de testar os valores.. e saber qual é qual e ainda me deui uma anotação de e a possibilidade de ser v1 diferente de v2