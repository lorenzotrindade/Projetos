#include <stdio.h>
#include <string.h>

/*
Escrever um programa para ler uma string e um número n, e eliminar os n caracteres
do final da string. A string resultante deve ser mostrada na tela. Por exemplo, lida a
string “Agora” e o número 3, deve mostrar na tela a palavra “Ag”. 

*/
#define TAM 100
int main(void){
    char str[TAM];
    int n,tam;

    printf("digite a palavra: ");
    scanf("%s",str);
    printf("difite o valor q deseja remover")
    printf("%d",&n);

    tam = strlen(str);
    
    if(n >= tam){
        str =  '\0', // se N for maior ou igual ao tamanho, a string fica vazia
    } else{
        str[tam - n] = '\0' //coloca o terminador n posições do fim
    }
    printf("String resultante: %s \n",str)

}