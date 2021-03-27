#include <stdio.h>

int main(){
    int n,pr,se,m;

    printf("Digite um número de 4 algarismos:");
    scanf("%i",&n);
    pr=n/100;
    se=n-(pr*100);
    m=pr*se;

    printf("A primeira parte %i, a segunda e %i e a multiplicacao das partes e %i",pr,se,m);

}
