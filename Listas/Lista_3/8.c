#include<stdio.h>

int main(){
    
    int v;
    int dentro=0,fora=0;
    
    for (int i = 1; i <=10 ; i++)
    {
        printf("\nDigite o valor numero %i:",i);
        scanf("%i",&v);
        if (v<=20 && v>=10){
            dentro++;
        }else{
            fora++;
        }
    }

    printf("Dentre os valores lidos %i estao dentro e %i estao fora.",dentro,fora);
}