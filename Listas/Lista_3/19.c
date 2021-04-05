#include<stdio.h>

int main(){
    int m,i=1,p;
    float s,s1;

    do{
        printf("\nDigite matricula e o salario do funcinario e a produtividade:\n");
        scanf("%i %f %i",&m,&s,&p);
        if (m==0){
            break;
        }
        switch (p){
        case 1:
            s1=s+s*0.4;
            printf("O salario novo do individuo de matricula %i e %.2f",m,s1);
            break;
        case 2:
           s1=s+s*0.2;
           printf("O salario novo do individuo de matricula %i e %.2f",m,s1);
           break;
        case 3:
            s1=s+s*0.05;
            printf("O salario novo do individuo de matricula %i e %.2f",m,s1);
            break;
        default:
            printf("Produtividade invalida");
            break;
        }
    }while (i!=0);
}