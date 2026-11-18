/*
Escrever um programa que construa uma matriz 10 x 3 de números em ponto flutuante,
colocando em cada elemento da matriz o resultado da divisão do seu índice maior pelo menor.
Quando o menor índice for 0, deve ser colocado na matriz o valor -1.

*/

#include <stdio.h>
/*
main(){
    
float mes[10][3];
float i, jj;
    int limite = 0;

    printf("digite 30 valores: ");
        for( i = 0; i<10; i++){
            scanf("%d",&mes[i][3]);
            if(i == 10){
                limite++;
                for(jj=0;jj<3;jj++){
                    scanf("%d",&mes[10][jj]);
                }
            }
            if(limite == 2){
                i = 10;
            } else{
                i = 0;
            }
        }  
        
    }
 */

/*
Escrever um programa que construa uma matriz 10 x 3 de números em ponto flutuante,
colocando em cada elemento da matriz o resultado da divisão do seu índice maior pelo menor.
Quando o menor índice for 0, deve ser colocado na matriz o valor -1.

*/
 #define lin 10
 #define col 3
 int main(){
    float mes[lin][col];
    int i, ii;
    for(i = 0; i<lin; i++){
        for(ii=0; ii<col;ii++){
            if(i == 0 || ii == 0){
                mes[i][ii] = -1;
            }
            // aqui tbm erramos pq precisamos usar os indices, não os valor fixos
            //o resultado da divisão do seu índice maior pelo menor
            // indices são indeiros, eles são  posição o q tem dentro deles é fracionario 
            else if (i > ii){
                mes[i][ii] = (float) i/ii;
            } else {
                mes[i][ii] = (float) ii/i;
            }
        }
    }
    printf("print da matriz 10x3");
         for(i = 0; i<lin; i++){
        for(ii=0; ii<col;ii++){
            printf("%.2f",mes[lin][col]);
       }
    }
    printf("\n");
}