#include <stdio.h>

int main(){
    int min,cap;
    float desp,minf;
    printf("digite quanto tempo passou: ");
    scanf("%d", &min);
    printf("digite a capacidade: ");
    scanf("%d",&cap);
    printf("digite a quantidade despejada até o momento");
    scanf("%d", &desp);

    minf=(int)((((cap-desp)*min)/desp)+0.5);
    printf("O tempo necessario restante é %d", minf);

}

