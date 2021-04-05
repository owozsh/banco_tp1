#include<stdio.h>

int main(){
    int n,i=1,c=0,j=0;

    do{
        printf("Digite uma idade:");
        scanf("%i",&n);
        if(n<21){
            j=j+1;
        }
        if(n>=50){
            c=c+1;
        }
        if(n==0){
            i=0;
        }
    }while (i!=0);

    printf("O numero de pessoas com idade menor que 21 e %i e com idade maior que 50 e %i.",j,c);

}