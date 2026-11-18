/*
 Escreva um programa que leia uma matriz [10x10] de caracteres, e mostre na tela e conte o 
número de ocorrências de caracteres iguais em posições adjacentes. As posições adjacentes 
devem ser verificadas na horizontal, vertical e diagonal.
*/

    //codigo do professor

    #include <stdio.h>
    #define lin 10
    #define col 10

 int main() {
    int mat[lin][col];
    int i, ii;
    int cont=0;

    printf("digite 25  valores: \n");
    for(i=0;i<lin;i++){
        for(ii=0;ii<col;ii++){
            scanf("%d", &mat[i][ii]); 
    }
   }
   // -1 paa nao testar a ultima linha
   for(i=0;i<lin-1;i++){
    for(ii=0;ii<col;ii++){
         //fixa coluna3
        if(ii < col && mat[i][ii] == mat[i][ii+1]){
            cont++
        }
         //fixa coluna2
        if(ii > 0 && mat[i][ii] == mat[i+1][ii-1]){
            cont++
        }
        //fixa coluna3
        if(mat[i][ii] == mat[i+1][ii]){
            cont++
        }
        if(mat[i][ii] == mat[i+1][ii+1]){
            cont++
        }
    }
    for(ii = 0; ii <col-1;ii++){
        if(mat)
    }

}