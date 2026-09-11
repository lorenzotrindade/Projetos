/*
Escrever um programa que leia dois valores numéricos, um representando o valor do salário
de um trabalhador e o outro o percentual de reajuste que este salário deve receber. O
programa deve calcular e mostrar na tela o salário após o reajuste.
*/

#include<stdio.h>
main()
{
int salario;
float reajuste;
printf("digite o valor do salario: " );
scanf("%d",&salario);
printf("digite o valor de reajuste: " );
scanf("%f",&reajuste);

reajuste= (reajuste *salario)/100;
salario = salario + reajuste;
// 


printf("Seu novo salario é: %d",salario);
}