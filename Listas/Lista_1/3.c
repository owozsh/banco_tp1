#include <stdio.h>

int main(){
    float peso,altura,imc;

    printf("Digite o valor do seu peso(em quilos) e altura(em metros) respectivamente:\n");
    scanf ("%f %f",&peso,&altura);

    imc=peso/(pow(altura,2));

    printf("O IMC e: %f",imc);



}
