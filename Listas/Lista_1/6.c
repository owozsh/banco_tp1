#include <stdio.h>

int main(){
float celsius,f;

printf("Digite a temperatura a ser convertida: ");
scanf("%f",&celsius);

f=32+(212-32)/100*celsius;

printf("A temperatura digitada em Fahrenheit e: %.2fF.",f);


}
