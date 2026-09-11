/*
2. Escrever um programa que leia dois valores numéricos, um representando o valor do salário
de um trabalhador e o outro o percentual de reajuste que este salário deve receber. O
programa deve calcular e mostrar na tela o salário após o reajuste.

*/

#include<stdio.h>

int main()
{
    float s_antigo, s_novo, reajuste; 

    printf("digite o valor de seu salario: ");
    scanf("%f",&s_antigo);
    printf("valor de reajuste: ");
    scanf("%f",&reajuste);

    // vira inteiro e multiplica pelo atual
    reajuste= s_antigo * (reajuste / 100);
    s_novo= reajuste + s_antigo;

    
    printf("Seu salario apos reajuste ficou %f",s_novo);

}
