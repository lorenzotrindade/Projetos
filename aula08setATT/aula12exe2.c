/*
 Escreva um programa em C que leia dois n�meros naturais n�o nulos e calcule e mostre o
M�ximo Divisor Comum entre eles.
*/

#include <stdio.h>
main () {
int v1,v2,r,i, div;

    printf("digite um valor:");
    scanf("%d",&v1);
    printf("digite um valor:");
    scanf("%d",&v2);
    if(v1>v2){

    }
    else if (v1==v2){
        printf("isso n�o pode");
    }
    else {
         for(i=1;i <= v2;i++){
            r= i %v2;
            if(r !=0 ){
              div = v1/v2;
              printf("o resultado desta divis�o �: %d \n",div);
            }
         }
         printf("o menor divisor entre eles �: %d",div);
    }
    // tenho que achar o menor divisor comum entre eles
}


/*
teoria: o maximo divisor comum entre 2 numeros é o mais alto sem deixar restp
34/17 =  max 17
20/16= max 4
*/

/*
resposta:

int x,y,n;
 if(x>y){
  if(x%y == 0){
  printf("o maxumo divisor comum é %d",  y);
  }
  else {
  for(n=y/2;n>=1;y--)
    if(x%n==0 && y%n==0){
    printf("o maxumo divisor comum é %d",  n);
    }
  }

    }

*/

/*  metodo mais veloz
resposta:

int x,y,n;
 if(x>y){
  for(n=y/2;x% n!= || y%n != 0 ;y--) 
    {
    printf("o maxumo divisor comum é %d",  n);
   }
  }

  else {
  // quando ambas forem falsas, sai do laço, pq o || aceita uma vdd como vadeira
  // pq dividor por 2? pq assim todo numero tem metade, a desse valor nos começamos a diminuir 
  for(n=y/2;x% n!= || y%n != 0 ;y--) 
    {
    printf("o maxumo divisor comum é %d",  n);
  }

  }

    }


*/

