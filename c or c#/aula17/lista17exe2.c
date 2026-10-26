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

    int i,ii,a[TAM], b[TAM];
    int TAM3;
    printf("Digite os valores do vetor A: \n");
    for(i=0;i<TAM;i++){
        scanf("%d",a[i]);
        }
    printf("Digite os valores do vetor B: \n");
    for(i=0;i<TAM;i++){
        scanf("%d",b[i]);
    }
  /*  for(i=0;i<TAM;i++){
        for(ii=0;ii<TAM;ii++){
            if(a[i]==b[ii]){
                TAM2++;
            }
            else{
                df++;
            }
        }    
    }
        */

        switch ()
        {
        case 1:
            for(i=0;i<TAM;i++){
                for(ii=0;ii<TAM;ii++){
                 if(a[i]!=b[ii]){
                TAM3++;
            } else{
                b[ii]=-1;
            }
            int u[TAM3];
             for(i=0;i<TAM3;i++){
                for(ii=0; ;ii++){
                    u[i]=a[ii];
                    i++;
                    ii++;
            }
               for(ii=0; ;ii++){
                if(b[ii]==-1){
                    ii++;
                } else{
                    u[i]=b[ii];
                    i++;
                    ii++;
                }
            }
         }
        }     

    }
            
            break;
        
        default:
            break;
        }

    




}
