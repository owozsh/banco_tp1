#include<stdio.h>

int main(){
    int  i=1;
    int j=1;
    do {
        if (j%5==0){
        printf("%i\n",j);
        i++;
        }
        j=j+1;
    }while (i<=20);
}