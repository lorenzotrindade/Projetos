#include <stdio.h>

int main() {
    int m, n, i,r;
    int achou=0;

    printf("digite um valor entre 0 e 9");
    scanf("%d",&n);
    printf(" digite o valor inteiro:");
    scanf("%d",&m);

    while(m>0){
        i= m/10;
        r= m%10;
        m=i;
        // se liga sempre precisa atualizar a variavel

        // cuidar bem o que está comparando
        if(n==r){
            achou=1;
            m=0;
        }
    }
    if(achou==1){
        printf("n existe em M");
    }else {
        printf("n não existe em m");
    }
}