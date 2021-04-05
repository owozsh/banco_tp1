#include<stdio.h>

int main(){
    int n,n1,i=1,j=1;

    printf("Digite um valor para n:");
    scanf("%i",&n);
    n1=n;
    do{
        n1=n1/10;
        if(n1>=1){
            j=j+1;
        }else{
            i=0;
        }
    }while (i!=0);

    printf("O numero %i tem %i digitos.",n,j);

}