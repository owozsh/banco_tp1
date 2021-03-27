#include <stdio.h>

int main(){
    float total,centavos,sobra,entradareal;
    int reais,p1,p2,entrada;

    printf("Digite o preco dos produtos em reais: ");
    scanf("%f",&total);
    reais=total;
    centavos=total-reais;

    entrada=reais/3;
    sobra=reais%3;
    p1=entrada;
    p2=p1;
    entradareal=entrada+sobra+centavos;

    printf("Valor da entrada R$%.2f e 2 prestacoes de R$%i.00.",entradareal,p1);
}
