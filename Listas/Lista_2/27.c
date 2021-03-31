#include <stdio.h>

int main(){
    float imc,peso,altura;

    printf("Digite a altura em metros e massa em quilos da pessoa a ser analisada: \n");
    scanf("%f %f",&peso,&altura);

    imc=peso/pow(altura,2);

    if (imc<20){
        printf("Abaixo do peso.");
    }else if (imc>20 && imc<25){
        printf("Normal");
    }else if (imc>25 && imc<30){
        printf("Excesso de peso");
    }else if (imc>30 && imc<35){
        printf("Obesidade");
    }else{
        printf("Obesidade Morbida");
    }
}