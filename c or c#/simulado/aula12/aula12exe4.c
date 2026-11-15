/*
Fazer um programa que lê um inteiro positivo e calcula a raiz 
quadrada (aproximada) deste valor. 
Não deve ser usada nenhuma função pronta para o cálculo, 
que deve ser feito usando o seguinte método:
* tendo x como o número do qual se quer achar a raiz quadrada, 
deve-se propor um número qualquer n como primeira possibilidade 
(tente algo como n=x/2);
* se I x - n 2 I for menor do que um erro tolerável, 
no nosso caso 0,05, assuma n como a raiz aproximada; senão, 
gere um novo n, com o valor igual à média aritmética entre n e x/n.
*/

#include<stdio.h>

int main(){

    int n;
    float erro=0, x;
    printf("digite o valor de x");
    scanf("%d",&x);
    n = x/2;

    erro = x- n*n;
    if(erro < 0.05){
        erro-=erro; // garante q é positivo
    }
    while(erro>=0.05){
        n=(n+x/n)/2;
    }
    erro = x - (n * n); 
    if (erro < 0) { 
    erro = -erro; 
}
}