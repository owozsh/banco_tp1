#include<stdio.h>

int main(){
    int conta,i=1,n=0,t=0;
    float saldo,porcentagem;

    do{
        printf("Digite a conta e o saldo:\n");
        scanf("%i %f",&conta,&saldo);
        if(saldo>0){
            printf("Saldo positivo.\n");
            t=t+1;
        }else if(saldo<0){
            printf("Saldo negativo.\n");
            n=n+1;
            t=t+1;
        }else if (conta==0 && saldo==0){
            i=0;
        }
    }while (i!=0);
    porcentagem=n*100/t;
    printf("A porcentagem de negativos e %.2f porcento.",porcentagem);

}