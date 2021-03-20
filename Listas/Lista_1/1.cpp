#include <stdio.h>

int main() {

    float lado_cubo;

    printf("Insira o lado do cubo: ");
    scanf("%f", &lado_cubo);

    float area = lado_cubo * lado_cubo * lado_cubo;

    printf("A area e %.2f", area);    
}