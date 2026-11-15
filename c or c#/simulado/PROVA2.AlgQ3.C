/* Escreva um programa que leia cinco valores inteiros identificados por 
v1, v2, v3, v4 e v5, além de todos os valores de uma matriz 500 x 500 de elementos inteiros. 
APÓS A LEITURA DA MATRIZ COMPLETA, o programa deve fazer a contagem de quantos elementos 
armazenam valores maiores que o lido e identificado por v1 considerando apenas aqueles 
posicionados nas linhas v2 até v3 ou nas colunas v4 até v5. O resultado da contagem deve ser 
exibido na tela.
*/
#include <stdio.h>
#define LIN 5;
#define COL 5;

main() {
    int v1, v2, v3, v4, v5;
    int i, j, soma = 0;
    int mat[LIN][COL];

    printf("Digite os valores de v1, v2, v3, v4 e v5:\n");
    scanf("%d %d %d %d %d", &v1, &v2, &v3, &v4, &v5);

    /*
    Escreva um programa que leia cinco valores inteiros identificados por 
v1, v2, v3, v4 e v5, além de todos os valores de uma matriz 500 x 500 de elementos inteiros.
    */
   // aqui padrão se tenho q ler e imprimir é 2 for, um q percorre todo linha e le
    printf("Digite so valores da matriz 500x500:\n");
    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    /*
     o programa deve fazer a contagem de quantos elementos 
     armazenam valores maiores que o lido e identificado por v1 
     considerando apenas aqueles posicionados nas linhas v2 até v3
    */
    // verifica se o que tem é maior que o lido, pensei como assim maior qiue o lido? então releio a matriz
    //dai vou comparar
    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            //OU nas colunas v4 até v5
            if ((i >= v2 && i <= v3) || (j >= v4 && j <= v5)) {
                // não tenho certeza, mas creio q ele veio e pergunmtou, se o que foi difigitado em v1, se tem algo maior
                if (mat[i][j] > v1) {
                    soma++;
                }
            }
        }
    }

    // aqui não tenho certeza se era para imprimir a matriz ou apenas o cont, optei pela soma
    printf("elementos maiores que %d  é  %d elementos \n", v1, soma);

}
