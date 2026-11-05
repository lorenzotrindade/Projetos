#include <stdio.h>

struct hora {
    int hh;
    int mm;
    int ss;
};

int main() {
    struct hora r1, r2;

    printf("Digite o primeiro horario (hh:mm:ss): ");
    scanf("%d:%d:%d", &r1.hh, &r1.mm, &r1.ss);
    printf("Digite o segundo horario (hh:mm:ss): ");
    scanf("%d:%d:%d", &r2.hh, &r2.mm, &r2.ss);

    if (r1.hh > r2.hh) {
        printf("O segundo horario ocorre primeiro");
    }
    else if (r1.hh == r2.hh) {
            if (r1.mm > r2.mm) {
             printf("O primeiro horario ocorre primeiro");
        }   else if(r1.ss == r2.ss){
            printf("locura");
        } else{
            printf("O segundo horario ocorre primeiro");
        }
    }else{
            printf("O segundo horario ocorre primeiro");
        }

}