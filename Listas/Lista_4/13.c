#include <stdio.h>

int main(){
    int n,p=0;
    
    puts("Digite o valor de n: ");
    scanf("%i",&n);
    int a[n],b[n];

    for (int i = 0; i <= n-1; i++){
        printf ("Digite o %i valor de a: ",i+1);
        scanf ("%i",&a[i]);
    }
    printf("\n");
    for (int i = 0; i <= n-1; i++){
        printf ("Digite o %i valor de b: ",i+1);
        scanf ("%i",&b[i]);
    }

    for (int i = 0; i <= n-1; i++){
        p=(a[i]*b[i])+p;
    }

    printf("\nvalor de p: %i.",p);    
}