/**/

#include main <stdio.h>

#define TAM 8
main() {
int i,j,vet[TAM];
i=0;
while(i<TAM){
    scanf("%d",vet[i])
    for(j=i-1; j>=0;j--){
        if(vet[j]==vet[i])
        break;
        if(j== -1)
        i++; //isso é avanço de  posição
    }
}
for(i=0;i<TAM;i++)
    printf("%d",&vet[i]);
}
