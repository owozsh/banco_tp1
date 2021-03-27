#include <stdio.h>

int main(){
    float t,r,a1,n;

    printf ("Digite o primeiro termo(a1), a razao(r) e a quantidade de termos(n)");
    scanf("%f %f %f",&a1,&r,&n);

    t=a1+(n-1)*r;

    printf("O termo almejado e: %.2f.",t);



}
