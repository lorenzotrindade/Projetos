/*
escreva um programa que leia 3 valores inteiros, q representandno horas minutos e segundos
Na leitura o valor relativo as horas deve ser informado entre 0 e 23


apos a leitura devem ser lidos 2 novos valores, q estabelexem  a forma como o horario  deve ser exibido para o user
, os outros novos valores deve, ser 24  ou 12, indicando o formato a se rmostrando em AM ou PM
o outro valr deve ser 1 ou 2, indicando  se o horario deve ser mostrado separados por ':'(hh:mm:ss)
ou se cada valor deve ser seguido por uma breviação como (hhHmmMssS)
*/

#include <stdio.h>

main () {
    int h,m,s;
    int f;

    printf("digite a hora");
    scanf("%d",&h);
    printf(" digite os minutos");
    scanf("%d",m);
    printf("digite os segundos");
    scanf("%d",&s);

    printf("como deve ser exibido a hora em 12horas ou 24 horas?");
    scanf("%d",&f);

    if(f<12){

    }
    else{
        if(h>12){
            h=h-12;,
        }
    }
}
    