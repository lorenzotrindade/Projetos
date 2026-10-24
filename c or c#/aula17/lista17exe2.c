/*

2. Escrever um programa que leia dois vetores A e B de 20 elementos inteiros cada,
 que representam conjuntos. 
No programa devem ser gerados os conjuntos interseção
 entre A e B 
(A ∩ B), diferença entre A e B (A – B) e união entre A
e B (A U B).
*/
#include <stdio.h>
#define TAM 5

main (){

    int i,a[TAM], b[TAM];
    int uniao[TAM],d[TAM],intersec[TAM];
    printf("Digite os valores do vetor A: \n");
    for(i=0;i<TAM;i++){
        scanf("%d",a[i]);
        }
    printf("Digite os valores do vetor B: \n");
    for(i=0;i<TAM;i++){
        scanf("%d",b[i]);
    }
    for(i=0;i<(TAM+TAM);i++){
            uniao[TAM+TAM]= a[TAM] + b[TAM];
            printf("União dos vetores: %d",uniao[i]);
        }
    for(i=0;i<0;i++){
         scanf("%d",b[i]);
    }
    for(i=0;i<0;i++){
        printf("União dos vetores: %d",intersec[i]);
        printf("União dos vetores: %d",d[i]);
       
    }





}
