#include <stdio.h>
#include <math.h>

int main() {
    float raio, volume;
    printf("Digite o raio da esfera:");
    scanf("%f", &raio);
    volume = (4./3) * 3.14 * (pow(raio,3));
    printf("O volume de dado esfera de raio %.2f e %.2f.", raio,volume);
}
