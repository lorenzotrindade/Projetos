/*
4. Fazer um programa que lê um inteiro positivo e calcula a raiz quadrada (aproximada) deste
valor.
 Não deve ser usada nenhuma função pronta para o cálculo, que deve ser feito usando o
seguinte método:

, deve-se propor um número qualquer n como primeira possibilidade (tente algo como n=x/2); - se I x - n2  senão, gere um novo n, com o valor igual à média aritmética entre n e x/n.

tendo x como o número do qual se quer achar a raiz quadrada // logo preciso saber a raiz dele
*/

/*
não parece, mas isso abaixo é um for
I for menor do que um erro tolerável, no nosso caso 0,05, assuma n como a raiz
aproximada;

*/
#include <stdio.h>
main () {
    int v1,x, n;

    printf("digite um valor:");
    scanf("%d",&v1);
    printf("digite um valor:");


    v1 = v1*v1;
    for(n=v1/2;(v1-(n*n))>0.05;n--)
        if()
}
