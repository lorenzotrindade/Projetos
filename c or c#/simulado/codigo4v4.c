#include <stdio.h>

int main() {
    int m, n, i,r;
    int achou=0;
   

    printf("digite um valor entre 0 e 9");
    scanf("%d",&n);
    printf(" digite o valor inteiro:");
    scanf("%d",&m);

    
    for(; m>0 ; m=m/10) {
        r=m%10;
        if(r==n){
            achou=1;
            break;
        }
    }
    if (achou == 1) {
        printf("Achou \n");
        } else { 
        printf("Nao achou \n");
     }
}