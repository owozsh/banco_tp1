#include<stdio.h>

int main(){
    int i=1;
    int j=1;
    do {
        if (j%2==1){
        printf("%i\n",j);
        i++;
        }
        j=j+1;
    }while (i<=30);
}