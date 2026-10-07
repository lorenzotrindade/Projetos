#include <stdio.h>
#define TAM 1

main(){

int vet[TAM];
int i,n, valor=0;
printf("digite o valor de n");
scanf("%d",&n);
printf("digite 1000 valores: \n");
//inserção de valores
for(i=0; i<TAM;i++){
    scanf("%d", &vet[i]);    }
    printf("o valor acumulado é %d",valor);
}

/*Por exemplo, sendo 3 o valor de n, se o elemento de índice 5 tem
valor igual a 15 (15 / 3 = 5), deve ser contado.
*/

