#include<stdio.h>

int main(){
    float A,x;
    int n;

    printf("Digite o numero que se deseja calcular a raiz: ");
    scanf("%f",&A);

    printf("\nDigite o numero de interacoes: ");
    scanf("%i",&n);

    if (A<=0 || n <=0){
        printf("erro");
    }else{
        x=1;
        for (int i = 1; i <= n; i++) {
            x = (x + A/x) / 2;
        }
		printf("Raiz quadrada de %.2f = %.10f\n", A, x);
    }
}