#include<stdio.h>
main(){
str1[30],str2[30];
int i, iguais;

printf("digite uma palavra");
gets(str1);
printf("digite outra palavra: ");
gets(str2);
for(i=0;str1[i] !='\0' && str2[i] !='\0';i++){
        // se forem difentes mantem 0
    if(str1[i]!=str2[i]){
            iguais=0
    }
        if(iguais)// basicamente falar se maior q zero são iguais
            printf("strings iguais");
        else
            printf("strings Diferentes");
}
}
