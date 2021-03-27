#include <stdio.h>

int main(){
    float x;

    printf("Digite o valor de X:");
    scanf("%f",&x);
    x=x+0.5;

    printf("X arredondado: %.0f",x);
}
