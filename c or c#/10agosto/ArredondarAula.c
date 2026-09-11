#include<stdio.h>

int main() {
float v1;

printf("digite um valor flutuante: ");
scanf("%f", &v1);

// forçando a jogar fora o depois da virgula
v1 = (int)(v1 * 100 + 0.5) / 100.0;
printf("O valor arredondado é: %f",v1);
}
