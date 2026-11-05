/* 
. Escrever um programa que leia dois horários no formato hh:mm:ss e verifique qual horário 
ocorre primeiro. Use estruturas para representar os horário
*/
struct hora {
    int hh;
    int mm;    
    int ss;
}

#include<stdio.h>
 main (){
    struct hora r1,r2;
    printf("digite um horario no formato hh:mm:ss");
    scanf("%d:%d:%d",&r1.hh,&r1.mm,&r1.ss);
     printf("digite um horario no formato hh:mm:ss");
    scanf("%d:%d:%d",&r2.hh,&r2.mm,&r2.ss);

    if(r1.hh > r2.hh){
        printf("maior horario %d",r1);
    }
    else if( r1.hh == r2.hh){
        if(r1.mm > r2.mm){
            printf("maior horario &d",r1);
        }
        else{
            printf("maior horario &d",r2);
        }
    } else{
        printf("maior horario &d",r2);
    }
}