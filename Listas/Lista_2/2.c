#include <stdio.h>

int main(){
    int n;

    printf("Digite o valor de n:");
    scanf("%i",&n);

    if (n%3==0 && n%7==0) {
        printf("%i e divisivel por 3 e 7.",n);
    } else{
        printf("%i nao e divisivel por 3 e 7.",n);
    }
}

