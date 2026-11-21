/*
Ler duas matrizes $500 \times 500$. APÓS A LEITURA, somar os elementos da Matriz 1 que são menores do que TODOS os elementos da Matriz 21
*/

#include <stdio.h>

#define TAM 500
int main () {
    int m1[TAM][TAM];
    int m2[TAM][TAM];
    int i,j;
    int soma = 0, encontrados = 0;
    int menor_mat2;

    // PADRÃO DE LEITURA
    for (i = 0; i <TAM; i++) { 
      for (j = 0; j <TAM; j++) {
       scanf("%d",&m1[i][j]);
         }    
    }
      // PADRÃO DE LEITURA M2
    for (i = 0; i <TAM; i++) { 
      for (j = 0; j <TAM; j++) {
       scanf("%d",&m2[i][j]);
         }    
    }
    menor_mat2 =m2;
    for(i = 0; i <TAM; i++){
        for(j = 0; j<TAM;j++){
            // procurando o menor valor;
            if(m2[i][j] < menor_mat2){
                menor_mat2 = m2[i][j];
            }
        }
    }
    // somar elementos menor q mat2
     for(i = 0; i <TAM; i++){
        for(j = 0; j<TAM;j++){
            // se em algum momento tiver algo menor substitui;
            if(m1[i][j] < menor_mat2){
                soma+=m1[i][j];
                encontrados++;
            }
        }
    }
    if(encontrados == 0){
        printf("nada foi encontrado");
    } else{
        printf("foram encontrados  %d valores menor q todos elementos da mat2 e sua soma foi %d",encontrados,soma);
    }
}
/* vc disse issi "✅ **Certo:** Como você já calculou o menor valor da Matriz 2 inteira e guardou na variável `menor_mat2`, basta testar se o elemento da Matriz 1 é menor do que esse recordista: `if (m1[i][j] &lt; menor_mat2)`"
quer dizer q eu usei um laço a menos ou li a questão errada.. e o professor não se preocupa com overflow;
*/