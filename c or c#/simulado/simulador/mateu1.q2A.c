#include <stdio.h>
#define TAM 10
main() {
   int vet[TAM] = {1,3,2,1,3,4,3,4,5,5};
   int i,j;
   int cont,freq;
   cont=freq=-1; // ambos iguais para passar na primeira verificacao do for 
   /* for (i=0;i<TAM;i++) {
       printf("Digite o numero %d: ",i+1);
       scanf("%d",&vet[i]);
   }*/
 for (i=0; i<TAM && freq==cont; i++) {
       cont=0;
       for (j=0; j<TAM; j++) {
           if (vet[i]==vet[j])
               cont++;
       }
              if (freq==-1) 
                 freq=cont;
                 // basicamente dizendo, se é a primeira passadam daquele valor, desconsidere e freq receebe cont
                 // para se manterem no laço       
       else if (freq!=cont) {
           printf("Alguns ocorrem mais que outros");
           i=TAM;
           // mas caso em algum momento freq e cont são diferentes, ao terminar o laço interno, ja temos uma resposta
       }
   }   if (freq==cont)
       printf("repetem o mesmo numero de vezes");
}