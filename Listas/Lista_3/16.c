#include<stdio.h>

int main(){
    int n,i=1,j=0,s=0;

    do{
        printf("Digite um numero:");
        scanf("%i",&n);
        if(n%2==1 && n!=0){
            j=j+1;
            s=s+n;
        }
        if(n==0){
            i=0;
        }
    }while (i!=0);

    printf("O numero de elementos impares e %i e a soma deles e %i.",j,s);

}