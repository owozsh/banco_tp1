#include <stdio.h>

int main(){
    int n;

    printf("Digite o valor de n:");
    scanf("%i",&n);

    if (n%2==0 && n%3==0) {
        printf("%i e divisivel por 6.",n);
    } else{
        printf("%i nao e divisivel por 6.",n);
    }
}

