/*
 Escreva um programa em C que leia dois números naturais não nulos e calcule e mostre o
Máximo Divisor Comum entre eles.
*/

#include <stdio.h>
main () {
int v1,v2,r,i, div;

    printf("digite um valor:");
    scanf("%d",&v1);
    printf("digite um valor:");
    scanf("%d",&v2);
    if(v1>v2){

    }
    else if (v1==v2){
        printf("isso não pode");
    }
    else {
         for(i=1;i <= v2;i++){
            r= i %v2;
            if(r !=0 ){
              div = v1/v2;
              printf("o resultado desta divisão é: %d \n",div);
            }
         }
         printf("o menor divisor entre eles é: %d",div);
    }
    // tenho que achar o menor divisor comum entre eles
}


