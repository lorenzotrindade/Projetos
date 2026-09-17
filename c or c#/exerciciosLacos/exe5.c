/*
5. Escrever um programa que leia um valor inteiro e calcule e mostre 
a soma de todos os dígitos da representação decimal deste número. 
Por exemplo, a soma dos dígitos de 432 é 9 (4
+ 3 + 2). Lembre-se: para 432 / 10, quociente 43 e resto 2.


*/

#include<stdio.h>

int main(){

 int r, inteiro;
 int s=0;
 printf("digite um valor inteiro ");
 scanf("%d",&inteiro);
  
 while(inteiro> 0){
     r = inteiro%10;
    s+= r;
    inteiro = inteiro/10;
 }
 printf("o valor da soma dos inteiros é: %d", s);
}
