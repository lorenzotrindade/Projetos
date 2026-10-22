/*
Ler dois vetores de 10 elementos e verificar se os números que os
formam são os mesmos, ainda que em ordem
diferente. Para simplificar, considere que não há números repetidos dentro
de um mesmo vetor.
*/

#include <stdio.h>

#define TAM 3
 main() {
    int i, vet[TAM];
    printf("digit os valores do vetor, ele tem 10 elementos: \n");
    for(i=0;i<TAM;i++){
        scanf("%d",&vet[i]);
    }
    for(i=0;i<TAM;i++){
    printf("%d \n",vet[i]);
    }
}
