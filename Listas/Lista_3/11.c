#include<stdio.h>

int main(){
    int n,m,c;
    printf("Digite o valor de n:");
    scanf("%i",&n);
    printf("\nDigite o valor de m maior que n:");
    scanf("%i",&m);

    if(n>m){
        c=n;
        n=m;
        m=c;
    }

    for (int i=n; i <= m; i++){
        if (i%2==1){
            printf("%i\n",i);
        }       
    }
}