#include <stdio.h>

int main(){
    float T1,T2;
    int e;

    printf("\nDigite a temperatura a ser convertida: ");
    scanf("%f",&T1);
    printf("Digte 1 para converter de F para C e 2 para converter C para F: ");
    scanf ("%i",&e);

    switch (e){
    case 1:
        T2=(T1-32)*100/(212-32);
        break;
    case 2:
        T2=(T1*9/5)+32;
        break;
    default:
        printf("Digite apenas 1 e 2 por favor");
        break;
    }

    printf("A temperatura convertida para o resultado almejado e de %.2f graus",T2);
    
}
