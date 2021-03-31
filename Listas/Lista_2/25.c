#include <stdio.h>

int main(){
    int finalplaca;
    printf("Digite o final da placa: \n");
    scanf("%i",&finalplaca);

    switch (finalplaca){
    case 0:
        printf("O IPVA vence 30/04/2020");
        break;
    case 1:
        printf("O IPVA vence 31/05/2020");
        break;
    case 2:
        printf("O IPVA vence 30/06/2020");
        break;
    case 3:
        printf("O IPVA vence 31/07/2020");
        break;
    case 4:
        printf("O IPVA vence 30/08/2020");
        break;
    case 5:
        printf("O IPVA vence 30/09/2020");
        break;
    case 6:
        printf("O IPVA vence 30/11/2020");
        break;
    case 7:
        printf("O IPVA vence 30/11/2020");
        break;
    case 8:
        printf("O IPVA vence 31/12/2020");
        break;
    case 9:
        printf("O IPVA vence 31/12/2020");
        break;

    default:
        printf("digito invalido");
        break;
    }

}
