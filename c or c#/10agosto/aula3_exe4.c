/*
4. Escreva um programa que leia um número de dois dígitos e subtraia o valor de cada um dos
dígitos do valor lido. O valor resultante deve ser exibido.

*/
#include <stdio.h>

main() {
    int n, d, un, r;
    
    printf("Digite um numero de dois digitos (10 a 99): ");
    scanf("%d", &n);   
    d = n / 10;   
    
    un = n % 10;  

    r = n - d - un;

    printf("O valor resultante eh: %d\n", r);
}