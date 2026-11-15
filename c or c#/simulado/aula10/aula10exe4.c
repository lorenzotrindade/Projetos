/*
4. Fa�a um programa que l� um valor inteiro n informado pelo usu�rio e calcula e mostra o n
�simo elemento da s�rie de Fibonacci (0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...).

*/

#include<stdio.h>
main () {
 int n,x,y,z;
printf("digite o valor de inicio da sequencia:");
scanf("%d",&n);

if(n==1)
    printf("0");
 x=0;
 y=1;
 
 for(; n>z ;n--){
    z=x+y;
    x=y;
    y=z;
    printf("o Proximo valor da sequencia será %d",z);
 }

}
