#include <stdio.h>
struct tresLetras {
    char x, y, z;
};

main() {
    struct tresLetras a, b, c, d;
    int i;
    char letra;
    a.x = 'a';
    a.y = 's';
    a.z = 'c';
    b = a;
    c = b;
    for(i = 3; i > 1; i--) {
        letra = b.x;
        b.x = b.y;
        b.y = b.z;
        b.z = letra;
    }
    a.y = a.z;
    a.z = a.x;
    for(; i < 3; i++) {
        d = c;
        c = b;
        b = a;
        a = d;
    }
    printf("%c%c%c%c%c", c.y, b.x, a.z, b.z, a.y);
}

//O q seria impresso na linha 29? AACAS