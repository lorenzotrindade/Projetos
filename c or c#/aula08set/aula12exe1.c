/*
. Escreva um programa que leia dois valores inteiros, k e n, e calcule e mostre na tela um
valor S dado por
S = k * 1  + (k+1) * 2  + (k+2) * 3  + ... + (k+n) * (n+1).
*/

#include <stdio.h>
main () {
    int k,n,s,r=0,i=0;

    printf("digite um valor:");
    scanf("%d",&k);
    printf("digite um valor:");
    scanf("%d",&n);

    i=r=(k+n)*(n+1);  // eu me bugeui aqui.. me peguei olhando para isso
    while( i >= 0){
        s= i*n;
        i--;
        printf("o primeiro valor será: %d \n",s);
    } //  pse comecçeu com while, ams não teria como.. pois eu preciso eu preciso definir o valor que me foi dito plelo user.

}

//correto:


   #include <stdio.h>
   main () {
   int x,f;
   printf("digite o valor do fatorial");
   scanf("%d",&f);
   if (x==0){
        printf("resultado 1")
        }
       else{
        for(;x>1;x--)
            f=f*x;
       }
   }
