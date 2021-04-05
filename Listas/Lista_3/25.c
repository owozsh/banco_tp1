#include<stdio.h>

int main(){
    int n;
    int h=0;
    printf("Digite o valor de n: ");
    scanf("%i",&n);

    if(n<=0){
        printf("error");
    }else {
        for (int i = 1; i <= n; i++){
        h=h+(i*n);
        }
        printf("O valor de h e %i.",h);
    }
}