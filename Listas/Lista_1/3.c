#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Digite o valor do seu peso(em quilos) e altura(em metros) respectivamente:\n");
    scanf ("%f %f", &peso, &altura);

    imc = peso / (altura * altura);

    printf("O IMC e: %f\n",imc);



}
