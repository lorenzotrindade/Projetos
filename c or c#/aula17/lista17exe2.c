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
    int j,achou,TAM2;
    int uniao[TAM*2],d[TAM],intersec[TAM];
    printf("Digite os valores do vetor A: \n");
    for(i=0;i<TAM;i++){
        scanf("%d",&a[i]);
        }

    printf("Digite os valores do vetor B: \n");
    for(i=0;i<TAM;i++){
        scanf("%d",&b[i]);
    }
    // LOGICA: eu não sei tamanho, então ée é um contador
    TAM2=0;
    for(i=0;i <TAM;i++) {
           uniao[TAM2] = a[i];
           TAM2++;
     }
     for(i=0;i<TAM;i++){
        achou = 0;
        for (j = 0; j < TAM2; j++){
            if(b[i]==uniao[j]){
                achou=1;
            }
        }
        if (achou == 0){
        uniao[TAM2] = b[i];
        TAM2++;
        }
        
     }
        printf("uniao: ");
        for(i=0;i<TAM2;i++){
            printf("%d", uniao[i]);
        }  
        printf("\n");

        // diferença


}
