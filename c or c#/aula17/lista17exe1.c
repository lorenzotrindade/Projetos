    /*1. Escrever um programa que leia dois vetores de 10 elementos inteiros e 
    fa�a a multiplica��o dos elementos de mesmo
�ndice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante. */

#include <stdio.h>
#define TAM 3

main (){

int i,ii, vet1[TAM], vet2[TAM], vet3[TAM];

printf("Digite os valores do vetor 1: \n");
    for(i=0;i<TAM;i++){
    scanf("%d",&vet1[i]);
    }

    printf("Digite os valores do vetor 2: \n");
    for(i=0;i<TAM;i++){
        scanf("%d",&vet2[i]);
    }
    for(i=0;i<TAM;i++){
        for(ii=0;ii<TAM;ii++)
             vet3[i]= vet1[i] *vet2[ii];
    }
    for(i=0;i<TAM;i++)
    printf("%d-",vet3[i]);
}
