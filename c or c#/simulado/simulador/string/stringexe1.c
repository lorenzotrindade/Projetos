/*
inversão da propria string
*/
#include <stdio.h>
#include <string.h>
#define TAM 10
 int main (void){
     char str[TAM] //  DECLARAÇÃO DE STRING
     int i, j, tam; // lembra todo indice deve ser inteiro, ams o valor armazenado nele não
     char temp;

     // leia uma string

     printf("digite uma string").
     scanf("%s",str);
     tam = strlen(str); //  pega o tamanho, mas não o conteudo

     // faça a sua inversão.. na propria sem copiar seu contedo para outra
     for(i=0, j=TAM -1; i<j ; i++,j--){
            // é aquela usar o giro de variaveis
        temp = str[i];
        str[i] = str[j] //pega a ultima letra
        str[j] = temp; // coloca a letra salva em temp, na direta e ai ocorre a inversaão a cada iteração

     }
     printf("string invertida: %s\n",str)

}
