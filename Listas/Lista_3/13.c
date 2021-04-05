#include<stdio.h>

int main(){
    int n,i=1,j=0;

    do{
        printf("Digite uma idade:");
        scanf("%i",&n);
        if(n>=18){
            j=j+1;
        }
        if(n==0){
            i=0;
        }
    }while (i!=0);

    printf("O numero de eleitores e %i.",j);

}