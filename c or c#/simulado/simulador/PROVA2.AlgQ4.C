/*Escreva um programa que comece com a leitura de três strings. 
Se pelo menos duas das três strings tiverem o mesmo tamanho,
 esse fato deve ser informado na tela e nada mais deve ser feito. 
 Caso todas as strings tenham tamanhos diferentes, 
 o programa deve contar e informar na tela quantas vezes o primeiro caractere da string de menor tamanho
  e o último caractere da string de maior tamanho ocorrem na terceira string
   (aquela que não é a maior nem a menor).
*/
#include <stdio.h>
#include <string.h>

int main() {
    char str1, str2, str3;
    int tam1, tam2, tam3;
    int i;
    char char_menor, char_maior;
    int cont_menor = 0, cont_maior = 0;

    printf("Digite as tres strings:\n");
    scanf("%s %s %s", str1, str2, str3);

    tam1 = strlen(str1);
    tam2 = strlen(str2);
    tam3 = strlen(str3);
}
