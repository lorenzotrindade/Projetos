/*
4. Escreva um programa que leia e armazene em um vetor os dados de 30 pessoas.
 Estes dados são o nome da pessoa, sua idade, e os nomes completos do pai e da mãe. 
 A seguir, o programa deve identificar (e mostrar os índices) das pessoas que estão relacionadas por um 
parentesco avô-neto e irmão-irmão. 
No caso dos irmãos, deve ser informado ainda qual é o 
mais novo dos dois.

*/
#include <stdio.h>

struct pessoa { 
char nome[20]; 
char mae[20]; 
char pai[20]; 
int idade; 
};

#define TAM 5;
int main(){
    // FAZENDO VETOR DE STRUCT
    struct pessoa vet[TAM];
    int i, j;
    for(i = 0, i<TAM;i++){
        printf("digite o seu nome ");
        gets(vet[i].nome);
        printf("digite o nome da mãe ");
        gets(vet[i].mae);
        printf("digite o nome do pai ");
        gets(vet[i].pai);
        printf("digite a idade ");
        scanf("%d",vet[i].idade);
        fflush(stdin);
     }
     for(i = 0; i<TAM;i++){
        printf("%s - %s - %s - %s",vet[i].nome,vet[i].mae,vet[i].pai,vet[i].idade)
    }
    for(i = 0; i<TAM;i++){
        for(ii = 0; ii < TAM;ii++){
            if(!strcmp(vet[i].mae, vet[ii].mae) || (!strcmp(vet[i].pai, vet[ii].pai)) || (!strcmp(vet[i].mae, vet[ii].pai)) )
       
            if(vet[i].idade > vet[ii].idade)
            printf("%s(indice %d) e o mais velho",vet[i].nome,i);
            if(vet[i].idade < vet[ii].idade)
            printf("%s(indice %d) e o mais velho",vet[i].nome,ii);
        }
    }
    for(i = 0; i<TAM;i++){
        for(ii = 0; ii < TAM;ii++){
        if( j != i){
            if(!strcmp(vet[i].nome,vet[j].mae || !strcmp(vet[i].nome,vet[i].pai)))
                for(k != i &&)
        }
        }
      }