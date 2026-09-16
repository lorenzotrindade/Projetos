/*
Escrever um programa que leia um inteiro n 
e mostre na tela todos os valores inteiros 
entre 1 e 1000 que são divisíveis por n.

*/

#include <stdio.h>

int main () {
    int n,i,r; 
    printf("digite um valor inteiro:");
    scanf("%d",&n); 
    for(i=1000; i>=1;i--){
        r= i%n;
        if(r == 0){
            printf("%d é divisivel por %d \n", i, n);
        }
    }
    
}