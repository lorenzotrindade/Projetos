/*
 Escrever um programa que lê 15 valores,
 um de cada vez, e conta quantos deles estão no
intervalo [10,20], quantos estão dentro do intervalo [26,30] 
e quantos deles estão fora destes
intervalos, mostrando estas informações.

*/

#include <stdio.h> 

int main () {
    int i, valores, fora=0;
    int intervalo26 =0, intervalo2030=0;

    printf("digite 15 valores: \n");
    for(i=14;i>=0;i--){
        scanf("%d",&valores);
        if(valores >= 10 && valores<=20){
            intervalo2030++;
           }
        else if(valores >= 26 && valores<=30){
              intervalo26++;
        }
        else {
        fora++;
        }
    } 
    printf("O presentes no intervalo 10-20 são %d, no intervalor 26-30 são %d e fora desde são %d",intervalo2030,intervalo26,fora);
}