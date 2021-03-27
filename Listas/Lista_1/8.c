#include <stdio.h>

int main() {
    float km, m;
    printf("Digite a quantidade de quilometros: ");
    scanf ("%f", &km);
    m = km * 0.621371;
    printf("A quantia de quilometros dada em milhas equivale a %f.\n", m);
}
