#include <stdio.h>

int main(){
    float t,ms,ms2;

    printf ("Digite o tempo em segundos: ");
    scanf("%f",&t);

    ms=1000/t;
    ms2=ms/t;

    printf ("A aceleracao do carro no foi de %f",ms2);

}
