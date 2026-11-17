/*
 Escrever um programa que leia valores para uma matriz 5 x 5 de inteiros e verifique qual o
menor elemento presente nas “bordas” da matriz, isto é, o menor entre os elementos que
fazem parte da primeira linha, da primeira coluna, da última linha e da última coluna.
*/

#include <stdio.h>
 #define lin 5
 #define col 5
 /*
 int main(){
    int mat[lin][col];
    int i, ii;
    int primeira_linha, ultima_linha;
    
    printf("digite 25  valores \n");
    for(i=0; i<lin;i++){
        if(i==0 && ii==0){
            primeira_linha = i;
        } for(ii=0;ii<col;ii++)
        scanf("%d",&mat[i][ii]);
        if(i==lin && ii==col){
            ultima_linha = ii;
        }
    }
    if(primeira_linha > ultima_linha){
        printf("A coluna numero da 1x1 é o %d menor elemento", primeira_linha);
    }else{
        printf("A coluna numero da 5x5 é o %d menor elemento", ultima_linha);
    }
}
*/

main (){
    int mat[lin][col];
    int i, ii, menor;

    printf("digite 25  valores: \n");
    for(i=0;i<lin;i++){
        for(ii=0;ii<col;ii++){
            scanf("%d", &mat[i][ii]);
        }
    }
    //
    menor=mat[0][0];
     for(i=0;i<lin;i++){
        for(ii=0;ii<col;ii++){
            if(i==0 || i==lin-1 || ii == 0 || ii == col - 1) {
                if(mat[i][ii] < menor){
                    menor = mat[i][ii];
                }
             }
            }
        }       
        printf("O menor elemento presente nas bordas da matriz e: %d\\n", menor);
    }