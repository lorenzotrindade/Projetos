/*
 Ler dois valores inteiros positivos e calcular o seu produto sem usar o operador ' * ‘.
*/
#include<stdio.h>

main (){
int v1,v2,aux,c, valor,valor1;
printf("digite um valor inteiro positivo");
scanf("%d",&v1);
printf("digite um valor multplicador:" );
scanf("%d",&v2);

c=1;
valor=valor1=v1;
while(c < v2) {
    valor=valor+v1;
    valor1=valor;
    c++;
}

printf("O resultado será: %d", valor1);

}
