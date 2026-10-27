#include <stdio.h>

#define TAM 3
 main() {
    int i,ii, vet1[TAM], vet2[TAM];
    dif=0,soma1=0,soma2=0;
    printf("digite os valores do vetor, ele tem 10 elementos: \n");
    for(i=0;i<TAM;i++){
        scanf("%d",&vet1[i]);
    }
    printf("digite os valores do vetor, ele tem 10 elementos: \n");
    for(i=0;i<TAM;i++){
    scanf("%d",&vet2[i]);
    }

    for(i=0;i<TAM && vet1[i]==vet2[i];i++){
            dif=1;
        }
    for(i=0;i<TAM;i++)
            soma1+= vet1[i];
            soma2+=vet2[i];
    if(dif == 0){
        printf("são diferentes");
    }
    else if(d){
        printf("são iguais");
    }
}
