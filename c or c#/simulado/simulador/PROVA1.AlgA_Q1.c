/*Observe o codigo e resposta o que sai na linha 16*/
#include <stdio.h> 
main(void) {
    int a, b ,c;
    a=0;
    if(a/2 > 2){
        a++;
        b=a*2;
        c=b*2-4;
        a=c/4;
    }else{
        b=a*4;
        c=a*b;
        a=b+c;
    }
    printf("%d",a);
}
/*reposta: 0*/