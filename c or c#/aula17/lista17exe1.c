    /*1. Escrever um programa que leia dois vetores de 10 elementos inteiros e faça a multiplicação dos elementos de mesmo
índice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante. */

#include <stdio.h>
#define TAM 10

main (){

int i,j,a, vet1[TAM], vet2[TAM], vet3[TAM];

printf("Digite os valores do vetor 1: \n");
for(i=0;vet1[i]>=TAM;i++){
    scanf("%d \n1",vet1[i]);
    }

    printf("Digite os valores do vetor 2: \n");
    for(j=0;vet2[j]>=TAM;j++){
        scanf("%d",vet2[j]);
    }
        if(vet1[i]==vet2[j]){
        vet3[a]=vet1[i]*vet2[j];
        }
        printf("%d \n",vet3[a]);
}
