#include <stdio.h>

int main(){
    int n[20];

    for (int i = 0; i <= 19; i++){
        printf ("Digite o %i valor de v: ",i+1);
        scanf ("%i",&n[i]);
    }

    for (int j = 0; j <= 10; j++){
        printf ("%i ",j);
        for (int i = 0; i <= 19; i++){
            if (n[i]==j){
                printf ("*  ");
            }
        }
        printf("\n");
    }
    

    
}