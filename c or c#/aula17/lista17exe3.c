/*
Ler dois vetores de 10 elementos e verificar se os n�meros que os
formam s�o os mesmos,ainda que em ordem
diferente. Para si mplificar, considere que n�o h� n�meros repetidos dentro
de um mesmo vetor.
*/

#include <stdio.h>

#define TAM 3
 main() {
    int i,dif,ii, vet1[TAM], vet2[TAM];
    printf("digite os valores do vetor, ele tem 10 elementos: \n");
    for(i=0;i<TAM;i++){
        scanf("%d",&vet1[i]);
    }
    printf("digite os valores do vetor, ele tem 10 elementos: \n");
    for(i=0;i<TAM;i++){
    printf("%d \n",vet2[i]);
    }

    for(i=0;i<TAM;i++)
    dif=0;
    for(ii=0;ii<TAM;ii++){
        if(vet1[i]!=vet2[ii]){
            dif=1;
             ii=TAM;
        }
    }
    if(dif == 1){
        printf("são iguais");
    }    
}
