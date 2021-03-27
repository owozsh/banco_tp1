#include <stdio.h>

int main(){
    float c,l,preco,precototal;

    printf ("Digite as medidas do terreno regular em metros:\n");
    scanf ("%f %f",&c,&l);

    printf ("Digite o preco de metro quadrado :R$");
    scanf("%f",&preco);

    precototal=preco*(c*l);
    printf("O preco do terreno e R$%.2f",precototal);
}
