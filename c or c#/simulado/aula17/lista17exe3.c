/*
 Ler dois vetores de 10 elementos e verificar se os números que os formam são os mesmos, ainda que em ordem
diferente. Para simplificar, considere que não há números repetidos dentro de um mesmo vetor.
*/

#include <stdio.h>
#define TAM 3
 main() {
    int i,ii, vet1[TAM], vet2[TAM],vet3[TAM];
    int soma1=0,soma2=0;
    printf("digite os valores do vetor, ele tem 10 elementos: \n");
    for(i=0;i<TAM;i++){
        scanf("%d",&vet1[i]);
     soma1 +=vet1[i];
    }
    printf("digite os valores do vetor, ele tem 10 elementos: \n");
    for(i=0;i<TAM;i++){
    scanf("%d",&vet2[i]);
    soma2 +=vet2[i];
    }
    for(i=0;i<TAM;i++){
        for(ii=0;vet1[i]==vet2[ii];ii++){
        }
    }
    if(soma1 != soma2){
        printf("são diferentes");
    }
    else{
        printf("são iguais");
    }
}
