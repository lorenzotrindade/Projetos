/*
3. Escrever um programa que lê um horário hh:mm:ss e verifica se este está correto.

*/
#include<stdio.h>

main () {
    int hh,min,seg;

    printf("Digite um horario no formato hh:mm:ss");
    scanf("%d , %d, %d",&hh,&min,&seg);
    
    if(hh >=60 && hh <24 ){
        prinf("hora ok");
    } else {
        printf("esta hora não exite");
    }
     if(min >=60 && min <60 ){
        printf("minutagem ok");
    } else {
        printf("esta minutagem não exite");
    }
    if(seg >=6 0 && seg <60 ){
        printf("segundos ok");
    } else {
        printf("estes segundos não exite");
    }

}