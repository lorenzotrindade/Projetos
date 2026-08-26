/*
2. Escrever um programa que leia os tamanhos dos lados de um retângulo e calcule sua área e
seu perímetro.
*/

#include<stdio.h> 
main (){

    int l,a, h;
    printf("digite o valor de um lado do retangulo: ");
    scanf("%d",&l);
     printf("digite o valor da altura do retangulo: ");
    scanf("%d",&h);

    a = l*h;
     printf("A area do retangulo é %d", a);



}