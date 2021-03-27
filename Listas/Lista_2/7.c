#include <stdio.h>

int main(){
    float altura;
    int idade;

    printf("Digite a altura e idade: \n");
    scanf("%f %i",&altura,&idade);

    if (altura >= 1.80 && idade<18){
        printf("Aprovado");
    }else{
        printf("reprovado");
    }


}
