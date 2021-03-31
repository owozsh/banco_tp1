#include <stdio.h>

int main(){
    int horas;
    float precohora,desconto,salariobruto,salariofinal;

    printf("Digite as horas trabalhadas e o preco das horas: \n");
    scanf("%i %f",&horas,&precohora);
    salariobruto=precohora*horas;

    if (salariobruto<=1900){
        desconto=0;
    }else if(salariobruto>1900 && salariobruto<=4300){
        desconto=0.1;
    }else if(salariobruto>4300 && salariobruto<=5800){
        desconto=0.15;
    }else {
        desconto=0.275;
    }

    salariofinal = salariobruto - (salariobruto*desconto);
    printf("O salario bruto e de %.2f e o liquido e de %.2f",salariobruto,salariofinal);


}
