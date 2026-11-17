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

<<<<<<< HEAD
    int i,a[TAM], b[TAM];
    int j,achou,TAM2;
    int uniao[TAM*2],d[TAM],intersec[TAM];
=======
    int i,ii,a[TAM], b[TAM];
    int uniao[TAM2], dif[40];
    int k,f,interseccao[5];
>>>>>>> d7f77e5f36850193b5443936d29d14a4309b3fde
    printf("Digite os valores do vetor A: \n");
    for(i=0;i<TAM;i++){
        scanf("%d",&a[i]);
        }

    printf("Digite os valores do vetor B: \n");
    for(i=0;i<TAM;i++){
        scanf("%d",&b[i]);
    }
<<<<<<< HEAD
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

=======
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
        printf("%d ",interseccao[k]);
    }
    printf("\n");
    printf("valores na diferença: ");
    for(i=0;i<dif[0];i++){
        printf("%d ",dif[i]);
    }
    printf("\n");
>>>>>>> d7f77e5f36850193b5443936d29d14a4309b3fde

}
