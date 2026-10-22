/*
Escreva um programa que leia dois vetores de 1000 elementos inteiros cada.
A seguir, copie intercalando os
elementos dos dois vetores para um terceiro vetor, de 2000 elementos.
 Isto significa que o primeiro elemento do primeiro
vetor deve ser seguido pelo primeiro elemento do segundo vetor, seguido pelo segundo elemento do primeiro vetor, e
assim por diante.
Exemplo: considerando a leitura de dois vetores menores, de 3 elementos cada, cujos conteúdos são 1 2 3 e 4 5 6, o
vetor resultante deve ser 1 4 2 5 3 6.
*/

#include <stdio.h>

#define TAM 5
 main() {
    int i, vet1[TAM],vet2[TAM],vet3[TAM];
    printf("digit os valores do vetor, ele tem 1000 elementos: \n");
    for(i=0;i<TAM;i++){
        scanf("%d",&vet1[i]);
    }
    printf("digit os valores do vetor, ele tem 1000 elementos: \n");
    for(i=0;i<TAM;i++){
        scanf("%d",&vet2[i]);
    }
    for(i=0;i<TAM+TAM;i++){


        for(i=0;i<TAM;i++){
            vet3[i]=vet1[i];

        }
        for(i=0; i<TAM;i++){
            vet3[i]=vet2[i];
           }
}
    for(i=0;i<TAM+TAM;i++){
    printf("%d \n",vet3[i]);
    }
 }
