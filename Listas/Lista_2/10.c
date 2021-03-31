#include <stdio.h>

int main(){

    float n;

    printf ("Digite o valor de n:");
    scanf ("%f",&n);

    if(n<0){
        n=n*n;
    }else{
        n=sqrt(n);
    }

    printf("N apos processamento: %.2f",n);
}
