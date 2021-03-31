#include <stdio.h>

int main(){
    float P,V,k;
    int T,n;

    printf ("Digite o Valor a ser amortizado, o numero de parcelas e taxa de juros:\n ");
    scanf ("%f %i %f",&V,&n,&k);

    T=(pow(1+k,n)-1)/(k*pow(1+k,n));

    P=V/T;

    printf("O valor da prestacao e %f",P);


}
