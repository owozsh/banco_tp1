#include <stdio.h>

int main(){
    float sf[10],srf[10];
    int mf[10];

    for (int i = 0; i <= 9; i++){
        printf ("Digite a matricula do funcionario: ");
        scanf ("%f",&mf[i]);
        printf ("Digite o salario do funcionario: ");
        scanf ("%f",&sf[i]);
        srf[i]=sf[i]*1.08;
    }
    printf("\n");
    for (int i = 0; i <= 9; i++){
        printf ("O salario do funcionario %i e R$%.2f.",mf[i],srf[i]);
        printf("\n");
    }
}