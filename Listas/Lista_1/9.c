#include <stdio.h>

int main(){
    float raio, altura;
    printf("Digite o raio e a altura do cilindro, respectivamente:\n");
    scanf("%f %f",&raio,&altura);

    float volume=3.14*(pow(raio,2))*altura;

    printf ("O volume desse cilindro e %.2f",volume);

}
