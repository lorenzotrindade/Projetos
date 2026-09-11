/*
3. Escrever um programa que leia um valor em Reais e calcule o menor número possível de
notas de R$100,00, R$50,00, R$20,00, R$10,00, R$5,00, R$2,00 e R$1,00 em que o valor lido
pode ser decomposto. Ignore os centavos. O programa deve mostrar o número total de notas.
*/

#include <stdio.h>

main(){
    int valor, n;
    float v, valor_resto;
    printf("digite um valor em reais : ");
    scanf("%d",&valor);

    v= valor / 100;
    valor_resto= valor %100;
    n++;

     v= valor / 50;
    valor_resto= valor %50;
    n++;

     v= valor / 20;
    valor_resto= valor %20;
    n++;

     v= valor / 10;
    valor_resto= valor %10;
    n++;

     v= valor / 5;
    valor_resto= valor %5;
    n++;

     v= valor / 2;
    valor_resto= valor %2;
    n++;

    v= valor / 1;
    valor_resto= valor %1;
    n++;


    /*  cara não sei.. o que entendi e que consigo sim pegar o valor da divisão e o resto para diluir o valor digitado pelo user
    problema acontece em como vou contar quantas notas foram usadas por ele.. sem user um condicional aqui..
    porque lembramos que o computador se comporta em modo cascata..

    tanto que meu teste eu usei o valor 620 e  o programa me gerou a reposta 649
    */

printf("o numero de notas foi %d",n);
}

