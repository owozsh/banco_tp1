#include <stdio.h>

int main(){
    int nascimento;

    printf("Digite o ano de nascimento: ");
    scanf("%i",&nascimento);

    int idade = 2021-nascimento;
    printf("A idade da pessoa e %i.\n",idade);

    if (idade <= 3)    {
        printf("A pessoa e um bebe");
    }else if (idade>=4 && idade<=10){
        printf("A pessoa e uma criança");
    }else if (idade>=11 && idade <= 18){
        printf("A pessoa e um adolescente");
    }else if (idade>=19 && idade<=60){
        printf("A pessoa e uma adulta");
    }else{
        printf("A pessoa e idosa");
    }
    
    
    
}
