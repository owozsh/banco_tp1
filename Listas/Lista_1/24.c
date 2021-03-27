#include <stdio.h>

int main(){
    int q,n100,n50,n20,n10;

    printf("Digite a quantia a ser sacada:R$ ");
    scanf ("%i",&q);

    n100=q/100;
    n50=(q-n100*100)/50;
    n20=(q-n100*100-n50*50)/20;
    n10=(q-n100*100-n50*50-n20*20)/10;

    printf("%i notas de 100, %i notas de 50, %i notas de 20, %i notas de 10",n100,n50,n20,n10);


}
