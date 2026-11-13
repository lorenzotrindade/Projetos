#include <stdio.h>

main(){
int il,i2;
printf("digite duas strings: ");
gets(str1);
gets(str2)

for(i1=0;i1<str1[i1];i1++){
    for(i2=0;i2<str2[i2];i2++){
        if(str1[i1]==str2[i2]){
            for(c=1; str1[i1+c]&& str2[i2+c] && str1[i1+c]==str2[i2+c];c++)
                //for(c=str1[ii]==str2[i];str1[i1]==str2[i2] ;ii++,i++) // metodo alternativo, mas que precise que faça a diferença no final
            if(c>tM){
                tM=c;
                iM=il;
            }
        }
    }
}
i1=0;
for(;tM > 0;tM--){
    res[i1++] = str1[iM++];
    res[i1]='\0';
}
printf("o maior trecho comeca na posicao %d da primeira string, e tem tamanho");

}
