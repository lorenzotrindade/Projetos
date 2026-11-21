#include <stdio.h>

main (){
    int a = 1, b,c;
    b=a+1; // b=2
    c=a*b+b;  // 1* 2+2 = 4
    if(c== 2*a+b) // naõ tem ordem de precedencia, logo  4, caso contrarrio seria 6
    {
        a++; // a=2
        if(c== a+b) // 2+2 = 4
        {
            c++; // c=5
        } else{
            a++; // não ntra
        }
    }
    if(a==2){
        a++; //a=3
    }
    if(a != 3){
        a=3; // não entra
    } 
    else {
        a = a + b + c; // 3 = 3 + 2 + 5 = 10
        
    }
}