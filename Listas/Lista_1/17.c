#include <stdio.h>

int main(){
    float x,y;
    int r,mm;

    printf("Digite os valores de X e Y:");
    scanf("%f %f",&x,&y);

    mm=y/x;
    r=mm*x;

    printf("O maior divisor de X menor que Y e %i",r);

}
