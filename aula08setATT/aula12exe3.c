#include <stdio.h>

main () {
    int x,y,n; 
    
    printf("digite um valor:");
    scanf("%d",&x);
    printf("digite um valor:");
    scanf("%d",&y);
    if(x<y) {
        n = x;
        x = y;
        y = n;
    }
    if(x%y==0) 
    // se ambos conseguirem se dividir, o maximo divisor comum entre eles pé o menor entre eles
    {
        printf("%d é o maximo divisor comum")
    }
    if(n = y/2; n%x!=0 && n%y !=0; n--){
        printf("%d e um divisor comum. \n", n); 
    }

}