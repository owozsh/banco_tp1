#include <stdio.h>

int main() {
    float bytes, transmissao, tempo;

    printf ("Digite o tamanho do arquivo(bytes) e a velocidade de transmissao(bytes/segundo):\n");
    scanf("%f %f", &bytes, &transmissao);
    tempo = bytes / transmissao;
    printf("O tempo de download e de %.2f segundos.", tempo);




}
