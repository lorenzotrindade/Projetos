/* 
Escreva um programa em C que leia um vetor de 10000 elementos 
inteiros. APÓS A LEITURA, o programa deve verificar E INFORMAR NA 
TELA se todos os valores presentes no vetor se repetem o mesmo número
 de vezes ou se alguns ocorrem mais vezes que outros.

*/

#include <stdio.h>
#define TAM 10

//esse achei bem chato na verdade, muito logico
main() {
    int vet[TAM];
    int i, j, k, ja_contado;
    int cont, freq_base = -1;
    int todos_iguais = 1;

   // padrãozinho
    printf("Digite os %d elementos do vetor:\n", TAM);
    for (i = 0; i < TAM; i++) {
        scanf("%d", &vet[i]);
    }

     /*APÓS A LEITURA, o programa deve verificar E INFORMAR NA 
    TELA  todos os valores presentes no vetor se repetem o mesmo número de vezes
    */
    for (i = 0; i < TAM && todos_iguais; i++) {
        ja_contado = 0;
        // aqui pensei em colcoar dentro do laço debaixo para ficar mais, mes sempre tem q quebrar o laço
        // aqui na de baixo fiquei um tempo pensado pq me pegou a ideia de se não seria a comáraçãod e indica invez de valor
        for (k = 0; k < i; k++) {
            if (vet[k] == vet[i]) {
                ja_contado = 1;
                break;
            }
        }

        // essa parte de se um ocorre mais vezes q outro, mas tbm pensei
        // vou colocar dentro do outro metodo acima
        // mas me bugou isso e ai apelei pra ia.. essa aprte de deixar separado achei melhor
        // só não sei s ee bem isso, pq para mim primeiro eu começo a conta apenas se 1 se repete e ai somar
        if (ja_contado == 0) {
            cont = 0;
            for (j = 0; j < TAM; j++) {
                if (vet[j] == vet[i]) {
                    cont++;
                }
            }
            // o claudinho me disse que deveria fazer isso,  mas tipo eu já tenho as frequencias e sempre entra por ser -1
            if (freq_base == -1) {
                freq_base = cont;
            } else if (cont != freq_base) {
                todos_iguais = 0; // Encontrou um numero que aparece mais ou menos vezes
            }
        }
    }

    if (todos_iguais == 0) {
        printf("todos os valores se repetem o mesmo numero de vezes %d.\n", freq_base);
    } else {
        printf("alguns valores ocorrem mais vezes que outros.\n");
    }
}
