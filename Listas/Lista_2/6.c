#include <stdio.h>

int main(){
    float salario,financiamento;

    printf("Digite o salario a ser analisado: R$");
    scanf("%f",&salario);
    printf("\nDigite o valor do financiamento: R$");
    scanf("%f",&financiamento);

    if (financiamento<=5*salario){
        printf("Aprovado");
    }else{
        printf("Reprovado");
    }

}
