/*
Considere que o turno de trabalho de uma 
pessoa começa às **13h30min** e vai até as 
**17h30min**[1]. 
Escreva um programa que leia um horário
 dentro desse intervalo e calcule, 
 em relação ao horário informado, 
 quantos minutos já decorreram e quantos
  ainda faltam dentro do turno[1]. Os 
  dois valores calculados devem ser exibidos na tela
*/

#include <stdio.h> 
main(void) {
    int h,m,hora,faltam;
   int min_start= 13*60+30;
    int min_end=17*60+30;
   int min_decorreram;

    printf("digite a hora q iniciou o serviço no formato hh:mm: \n");
    scanf("%d:%d",&h ,&m);

    hora=h*60+m;
    // o correto é sempre a hroa atual menos o inicio
    min_decorreram= hora - min_start; 
    faltam=  min_end - hora;
    
    printf("Faltam %d minutos ",faltam);
    printf("decorreram %d minutos desde q iniciou o serviço:",min_decorreram);

}