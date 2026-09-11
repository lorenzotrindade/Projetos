#include <stdio.h>
/*
1 - Escrever um algoritmo para ler duas notas de um aluno e escrever na tela a palavra
“Aprovado” se a média das duas notas for maior ou igual a 7,0.

 Caso a média seja inferior a
7,0, o programa deve ler a nota do exame e calcular a média final. Se esta média for maior ou
igual a 5,0, o programa deve escrever “Aprovado”, caso contrário deve escrever “Reprovado”.
*/
main ()
{
    float n1,n2, m, e=0;

    printf("digite o valor de uma nota: ");
    scanf("%f", &n1);
    printf("digite o valor de uma nota: ");
    scanf("%f", &n2);

    m = (n1 +n2) /2;

    if(m >= 7) {
        printf("aprovado");
    }
    else{
        printf("digite a nota do exame: ");
        scanf("%f", &e);
        if(m=(e+m)/2 >= 5) {
            printf("aluno aprovado");
        }
        else {
            printf("reprovado");
        }
    }
}
