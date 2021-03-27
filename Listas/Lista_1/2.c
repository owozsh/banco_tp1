#include <stdio.h>

int main(){
    float base, altura;

    printf("Digite a base e altura do triangulo, respectivamente: \n");
    scanf ("%f %f",&base,&altura);

    float area=base*altura/2;

    printf("A area e: %f",area);
}
