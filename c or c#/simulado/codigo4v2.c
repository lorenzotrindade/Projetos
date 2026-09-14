/*Escreva um prograna que leia uym valor N entre 0 e 9, 
e outro valor inteiro M , e verifique se o digito q representa N
 na notação decimal está ebtre os digitos da re´presentação do 
 valor M*/

#include <stdio.h>

int main() {
    int n, m,i,r,valor;

    printf("digite um valor entre 0 e 9");
    scanf('%d',&n);
    printf(" digite um valor entre 0 e 9");
    scanf('%d',&m);
    
    while(n =! '\0'){
        i = m/10;
        r = m%10;
            if(n==m){
                printf("Achou");
            }
    }
}
// cara sinto q ta faltando algo.. ajude a desenvpolevr meu raciocioneo mas semd as a resposta..