#include <stdio.h>

int main(){
    int m1,m2,m3;

    printf("Digite o numero a ser processado:");
    
    for (int i = 1000; i <= 9999; i++){
        m1=i/100;
        m2=i%100;
        m3=m1+m2;

        if (m3*m3==i){
            printf("%i ",i);
        }
    }

}
