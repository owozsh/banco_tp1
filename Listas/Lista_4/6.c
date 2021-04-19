#include <stdio.h>

int main(){
    float v[10];
    
    for (int i = 0; i <= 9; i++){
        printf ("Digite o %i valor de v: ",i+1);
        scanf ("%f",&v[i]);
    }

    printf("\nNumeros do vetor v[10] processados: ");

    for (int i = 0; i <= 9; i++){
        if (v[i]<10){
            printf ("%.0f-%.2f|",v[i],v[i]/2);
        }else{
            printf ("%.0f-%.2f|",v[i],v[i]*2);
        }
    }
}
