#include <stdio.h>

int main(){

    int n,m1,m2,m3;

    printf("Digite o numero a ser processado:");
    scanf("%i",&n);
    
    if (n<1000 || n>9999){
    printf("Error");
    }else{

    m1=n/100;
    m2=n%100;
    m3=m1+m2;

    if (m3*m3==n){
        printf("O numero tem essa caracteristica.");
    }else{
        printf("O numero nao tem essa caracteristica.");
    }

    }

}
