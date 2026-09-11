/*
2. Escrever um programa que leia dois valores inteiros positivos e calcule e mostre, sem usar o
operadores / e %, o quociente e o resto da divisão inteira do primeiro pelo segundo.
*/

#include<stdio.h>

main () {
int v1,v2,valor,valor1,c;
printf("digite um valor inteiro positivo");
scanf("%d",&v1);
printf("digite um valor divisor" );
scanf("%d",&v2);

c=v1;
valor=valor1=v1;
while(c < v2 && c >= v1) {
    valor = v2 -v1;
    valor1 = valor;
    c++;
}
printf("O resultado será: %d", valor1);

// substrações sucessivas
// e eu preciso de condições de entra e de saida..

}
