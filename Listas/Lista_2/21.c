#include <stdio.h>

int main(){
    float preco;
    int o;

    printf("Digite o preco do produto: ");
    scanf("%f",&preco);

    printf("Digite (a) para pagar com dinheiro ou cheque, (b) para a vista no credito, (c)para parcelas em 2 vezes sem juros e (d) para pagar em 3 parcelas com 10% de juros:\n");
    scanf("%i",&o);
    switch(o){
        case 1:
            preco=preco-preco*0.1;
            printf("Valor a ser pago: R$%.2f.",preco);
            break;
        case 2:
            preco=preco-preco*0.05;
            printf("Valor a ser pago: R$%.2f.",preco);
        break;
        case 3:
            printf("Valor a ser pago em cada parcela: %f",preco/2);
        break;
        case 4:
            printf("Valor a ser pago em cada parcela: %f",(preco+preco*0.1)/3);
            break;
        default:
            printf("Pagamento invalido.");
        break;
    }

}