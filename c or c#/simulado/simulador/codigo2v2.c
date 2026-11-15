#include<stdio.h>

int main () {
    int min, cap;
    int desp, minf;
    float v, v_atual;

    printf("digite quanto tempo passou: ");
    scanf("%d", &min);
    printf("digite a capacidade: ");
    scanf("%d",&cap);
    printf("digite a quantidade despejada até o momento");
    scanf("%d", &desp);

    v=desp/min;// vazão por min
    while(v_atual <= cap){
        v_atual += v;
        minf++;
    }
    printf("O tempo necessario restante é %d", minf);
}

// mas pela regra de 3 fica mais rapido pro pc
//mas aqui ta mais facil entender