/*
eliminar n caracteres do final da string
*/
#include <stdio.h>
#include <string.h>
#define TAM 10
 int main (void){
     char str[TAM];
     int n, tam;

     //ler a string
     printf("digite uma palavra");
     str("%s",str);
     printf("digite a quantidade de caracteres a remover ")
     scanf("%d",&n);

     tam = strlen(str);

    // verificar se n tem o mesmo tamnahp se é maior ou se é menor
    if(n >= str){
        // se for igual ou mais, tudo vira 0
        str='\0';
    } else{
    //caso seja menor, ai nos podemos excluir alguns indices
    str[tam -n] = '\0'
    }
    printf("a string resultando foi %s\n",str);

 }
