/*
2 - Escrever um algoritmo para ler a quantidade de horas-aula ministradas por dois professores
e o valor por hora recebido por cada um.

 Mostrar na tela qual dos professores tem salário total
maior.
*/

#include<stdio.h>
main() {
int p1,p2,m;
float h;

printf("digite as horas de aulas ministradas pelo professor 1: ");
scanf("%d",&p1);
printf("digite as horas de aulas ministradas pelo professor 2: ");
scanf("%d",&p2);
printf("digite o valor da hora: ");
scanf("%f",&h);

p1 = p1 * h;
p2 = p2 * h;
     if(p1 != p2);
     {
         if(p1 > p2){
            printf("professor 1  ganha mais: ");
         }
         else{
             printf("professor 2  ganha mais: ");
         }
     }
     else {
        printf("ambos recebem o mesmo valor");
     }
}

// ta faltando eu colcoar valores para horas diferentes,, tipo professor 1 recebe um valor e outro pressor receb outro valor por hora

