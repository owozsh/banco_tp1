#include <stdio.h>

int main(){

    float valor,desconto,descontado,valornovo;
    printf("Digite o valor do produto (R$) e o desconto(%):\n");
    scanf ("%f %f",&valor,&desconto);

    descontado=valor*(desconto*0.01);

    valornovo=valor-descontado;

    printf("O valor descontado e de R$%.2f e o valor com desconto e R$%.2f.",descontado,valornovo);

}
