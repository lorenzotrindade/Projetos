#include<stdio.h>

main (){

int eleitores;
float turno;

printf("digite o numero de eleitores de um municipio");
scanf("%d",&eleitores);

turno = (eleitores / 2) + 1;

printf("O candidato precisa de %f para ganhar no primeiro turno",turno);

}
