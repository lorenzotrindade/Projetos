/*
2. Escrever um programa que leia dois números e verifique se um deles é divisor do outro.

*/

#include<stdio.h>
main()
{
    int d1,d2;

    printf("digite um valor;");
    scanf("%d",&d1);
    printf("digite um valor;");
    scanf("%d",&d2);

    if (d1 % d2 == 0){
        printf("é o primeiro digito é um numero divisor");
    }
    else {
        if (d2 % d1 == 0){
            printf("digito 2 é um divisor de d1");
        }
        else {
            printf("nem um deles é divisor do outro");           
        }
    }
}

