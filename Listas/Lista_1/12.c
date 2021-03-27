#include <stdio.h>

int main(){
    float c,l,pa,a,pt;

    printf ("Digite as medidas do terreno regular em metros:\n");
    scanf ("%f %f",&c,&l);

    printf ("Digite o preco do metro de arame: R$");
    scanf("%f",&pa);

    a=4*(c*l);
    pt=pa*a;

    printf("Serao usados %.2f metros de arame.",a);
    printf("O preco do arame e : R$%.2f",pt);
}
