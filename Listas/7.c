#include <stdio.h>

int main(){
    int v[10],maiorp=0,maiori=0;

    for (int i = 0; i <= 9; i++){
        printf ("Digite o %i valor de v: ",i+1);
        scanf ("%i",&v[i]);
        if (v[i]%2==0){
            if (v[i]>maiorp){
                maiorp=v[i];
            }
        }else{
            if (v[i]>maiori){
                maiori=v[i];
            }
        }
    }
    puts("\n");

    for (int i = 0; i <= 9; i++){
        if (v[i]==maiorp){
            printf ("O %i valor de v: %ip.",i+1,v[i]);
        }else if (v[i]==maiori){
            printf ("O %i valor de v: %ii.",i+1,v[i]);
        }else {
            printf ("O %i valor de v: %i.",i+1,v[i]);
        }
        printf("\n");
    }
    
}