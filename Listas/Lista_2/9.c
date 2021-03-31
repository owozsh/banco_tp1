#include <stdio.h>

int main(){
    int quantia;
    float preco,total;
    char peca;

    printf("Digite o nome da peca a ser comprada, o preco e a quantidade:\n");
    scanf("%s %f %i",&peca,&preco,&quantia);

    total = quantia * preco;

    if (total>200){
        total = total - (total*0.2);
    }

    printf ("O valor da compra e de : %f",total);




}
