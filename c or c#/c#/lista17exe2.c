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
        scanf("%d",&a[i]);
        }
    printf("Digite os valores do vetor B: \n");
    for(i=0;i<TAM;i++){
        scanf("%d",&b[i]);
    }
    i=0;
     while(i < TAM + TAM){
        if(a[i] > b[i]){
            uniao[i]= a[i];
            uniao[i+1] = b[i];
        } else if(a[i] == b[i]){
            uniao[i]= a[i];
            uniao[i+1] = b[i];
        }
        else{
            uniao[i]= b[i];
            uniao[i+1] = a[i];
        }
        i++;
     }
     printf("União:");
     for(i=0;i<uniao[TAM];i++){
        printf("%d");
    }
            

}
