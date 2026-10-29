/*
4. Escreva um programa em C em leia um vetor de 10 elementos inteiros não repetidos,
além de dois valores inteiros val e n.
 O programa deve substituir o valor da posição n do vetor pelo valor lido em val. Como o vetor não deve ter valores
repetidos, se o valor de val já aparecia no vetor, a posição da sua ocorrência anterior
deve receber o valor da posição
em que val será colocado. O vetor alterado deve ser mostrado ao final do programa.
*/

#include <stdio.h>

#define TAM 3
main() {

    int i, vet1[TAM],vet2[TAM],val, n;
    printf("digite dois valores inteiros: \n");
    scanf("%d %d",&val,&n);
    printf("digit os valores do vetor, ele tem 10 elementos: \n");
    for(i=0;i<TAM;i++){
        scanf("%d",&vet1[i]);
    }
    for(i=0;i<vet1[TAM];i++){
        if( vet1[i]==val){
            vet2[i]=vet1[i-1];
        }
            if(vet1[i]==n){
                vet2[i]=val;
            }
    }
    printf("resultado \n");
    for(i=0;i<TAM;i++){
    printf("%d \n",vet2[i]);
}
}
