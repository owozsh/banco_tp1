#include <stdio.h>

int main(){
    int hora;
    float salario;

    printf ("Digite as horas trabalhadas: \n");
    scanf("%i",&hora);

    if (hora <=40){
        salario=hora*15;
    }else{
        salario=600+(21*(hora-40));
    }

    printf("O salario da pessoa e de %.2f reais.",salario);
    
}
