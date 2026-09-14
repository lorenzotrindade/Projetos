/*Escreva um prograna qye leia uym valor N entre 0 e 9, 
e outro valor inteiro M , e verifique se o digito q representa N
 na notação decimal está ebtre os digitos da re´presentação do 
 valor M*/

#include <stdio.h>

int main() {
    int n, m,i;

    printf("digite um valor entre 0 e 9");
    scanf('%d',&n);
    printf(" digite um valor entre 0 e 9");
    scanf('%d',&m);

    for(i =10;i > 0; i--){
        if(i == m ){
            printf("o valor está entre os valores inteiros");
        }
    }
    // não entendi a parte de representação decimal.. se pede  de 0 a 9 indcluse 0 e 9
    // claro não me de a resposta.. me ajude a desenvplver o racicionio ´para chegar a copnclusão correta.. e claro seguindo o meio de pensamento e metodos q da pra utiliz\ar em C e usando aqulas fontes de github q mandei..
}