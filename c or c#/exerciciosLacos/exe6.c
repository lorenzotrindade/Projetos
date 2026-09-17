/*
6. Escreva um programa que leia um número inteiro não negativo 
e coloque em outra variável o
valor inteiro cuja representação decimal possui os mesmos dígitos 
que a representação
decimal do valor lido, porém em ordem inversa.
Ex: lido o valor 235, o resultado deve ser o valor inteiro 532. 

*/


#include<stdio.h>

int main(){
    int r, n;
    
    printf("digite um valor inteiro ");
    scanf("%d",&n);

    while(n >0 ) {
        r = r *10 + n%10;
        n=n/10;
    }
    printf("o valor ao contrario é %d", r);

}