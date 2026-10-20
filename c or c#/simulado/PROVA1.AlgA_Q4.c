/*
Escreva um programa que leia valores **não negativos**,
 um de cada vez, até que seja lido um **valor negativo**[1]. 
 Ao final da leitura, o programa deve informar na tela o **total de valores lidos**,
  e quantos deles são divisíveis por **2**, quantos são divisíveis por **3**
   e quantos são divisíveis por **5**, mostrando os resultados da contagem na tela
*/
#include<stdio.h>
int main(void){
    int i, valores,dois,tres,cinco,cont;
    int total=0;
    printf("digite numero inteiros e quando for parar digite um numero abaixo de 0: \n");
    for(i=0;i>=0;i++){
        scanf("%d",&valores);
        total = total + valores;
        if(total / 2 >= 0){
        dois++;                                
        }if(total / 3 >= 0){
        tres++;        
        }if(total / 5 >= 0){
        cinco++;        
        }
        cont++;
    }
    printf("foram lidos %d valores, tivemos %d valores divisiveis por 2, %d valores divisiveis por 3, %d valores divisiveis por 5",cont,dois,tres,cinco);
}