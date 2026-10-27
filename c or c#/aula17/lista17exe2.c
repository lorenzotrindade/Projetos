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
#define TAM2 40


main (){

    int i,ii,a[TAM], b[TAM];
    int uniao[TAM2], dif[40];
    int k,f,interseccao[5];
    printf("Digite os valores do vetor A: \n");
    for(i=0;i<TAM;i++){
        scanf("%d",&a[i]);
        }
    printf("Digite os valores do vetor B: \n");
    for(i=0;i<TAM;i++){
        scanf("%d",&b[i]);
    }
    //uniao
    // for(i=0;i<TAM;i++){
    //     for(ii=0;i<TAM;i++){
    //         if(a[i]==b[i]){
    //             uniao[i]=
    //         }else{
    //             TAM3++;
    //         }
    //     }
    // }
    //diferença
    for(i=0;i<TAM;i++){
        f=1;
        for(ii=0;ii<TAM;ii++){
           if(a[i]==b[ii]){
            f=0;
            ii=TAM;
           }
    }
    if(f){
        dif[k]=a[i];
        k++;
    }
    }
    // intersecção
    for(i=0;i<TAM;i++){
        for(ii=0;ii<TAM;ii++){
            if(a[i]!=b[i])
            f=0;
            ii=TAM;
        }
        if(f){
            interseccao[5]=0;
            interseccao[k]=a[i];
            k++;
        }
    }
    printf("valores de interseccao:");
    for(i=0;i<interseccao[5];i++){
        printf("%d-",interseccao[k]);
    }
    printf("\n");
    printf("valores na diferença: ");
    for(i=0;i<dif[0];i++){
        printf("%d-",dif[i]);
    }
    printf("\n");

}

