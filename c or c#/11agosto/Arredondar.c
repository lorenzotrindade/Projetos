/*
Escreva um programa que leia um valor ponto flutuante e arredonde este valor na segunda
casa decimal. Atenção:
 nesse caso, não é necessário considerar a norma (ABNT NBR 5891), de
modo que você escolhe como arredondar um caso em que a 
parte descartada é um 5 seguido
apenas por zeros. 
*/

#include<stdio.h>

main () {
float v1, n_v1;
printf("digite um valor flutuante: ");
scanf("%f", &v1);


// o operador de modulo só funciona com numeros inteiros
// quando multiplo por 100 eu movo a virgula animal

// quando coloco entre parenteses, o calculo tem prioridade antes do calculo
/*teste de mesa
Multiplicação e Soma: v1 * 100 + 0.5 $\rightarrow$ 1235.1
Conversão (int) localizada: O (int) transforma apenas o 1235.1 em número inteiro  1235 (o .1 é descartado aqui).
Dividimos o inteiro 1235 por 100.0 $\rightarrow$ 12.35 (a vírgula volta para o lugar certo com precisão decimal)
*/
 n_v1 = (int) (v1*100 + 0.5)/100;

}