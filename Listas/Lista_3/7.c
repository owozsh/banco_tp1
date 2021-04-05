#include<stdio.h>

int main(){
    
    int v;
    int j=0;
    
    for (int i = 1; i <=10 ; i++)
    {
        printf("\nDigite o valor numero %i:",i);
        scanf("%i",&v);
        if (v%3==0 || v%5==0){
            j++;
        }
    }

    printf("Dentre os valores lidos %i sao divisiveis por 3 ou 5.",j);
}