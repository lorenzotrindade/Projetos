/*
Escreva um programa no qual seja lido um vetor de 1500 elementos inteiros e que
mostre na tela uma mensagem informando se o último valor ocorre mais uma vez, e
somente uma, no vetor. Caso o último valor não se repita, ou se repita mais de uma
vez, deve ser mostrada mensagem informando que a característica procurada não
ocorre.
*/

#include <stdio.h>
#define TAM 1500
main(){

int vet[TAM];
int i, cont=0;

printf("digite 1500 valores: \n");
//inserção de valores
    for(i=0; i<TAM;i++){
        scanf("%d", &vet[i]);
    }
    //leitura do vetor e comparação
    for(i=0;i<TAM-1;i++){
            // a posição atual é igual a ultima posição?
        if(vet[i]==vet[TAM-1]){
                cont++;
            }
    }
    printf("O ultimo valor repete %d",cont);
}
