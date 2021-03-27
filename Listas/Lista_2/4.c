#include <stdio.h>

int main(){
    int n,k;

    printf("Digite o valor de n e k:\n");
    scanf("%i %i",&n,&k);

    if (n%k==0) {
        printf("%i e divisivel por %i.",n,k);
    } else{
        printf("%i nao e divisivel por %i.",n,k);
    }
}

