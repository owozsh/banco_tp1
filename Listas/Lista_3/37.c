#include <stdio.h>
int main(){
    int p,primo,m1,m2,m3,n,aux,inverso=0,resto;
    scanf ("%i",&p);
    switch (p){
    case 1:
        printf("Digite o valor a verificar:");
        scanf("%i",&n);
        primo=0;
        for (int j = 2; j < n; j++){
            if (n%j==0){
                primo=1;
            }
        }
        if (primo==0){
            printf ("%i e primo",n);
        }else{
            printf ("%i nao e primo",n);
        }
        break;
    case 2:
         printf("Digite o numero a ser processado:");
        for (int i = 1000; i <= 9999; i++){
            m1=i/100;
            m2=i%100;
            m3=m1+m2;

            if (m3*m3==i){
             printf("%i ",i);
            }
        }
        break;
    case 3:
        scanf("%i",&n);
        aux=n;
        if(n>1){
        while(aux>1){ 
            resto=aux%10;
            aux=aux/10;
            inverso = inverso*10 + resto;
        }
        if (n==inverso){
            printf("capicua");
        }else{
            printf("Nao e capicua");
        }
        }else{
            printf("Erro");
        }
        break;
    case 4:
        break;
    default:
        break;
    }
}