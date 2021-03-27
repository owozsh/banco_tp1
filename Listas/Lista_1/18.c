#include <stdio.h>

int main(){
    int n,d,m,a;
    printf("Digite um numero de 8 digitos:");
    scanf("%i",&n);

    d=n/1000000;
    m=n-d*1000000;
    m=m/10000;
    a=n-(d*1000000)-(m*10000);

    printf("Data: %i/%i/%i",d,m,a);


}
