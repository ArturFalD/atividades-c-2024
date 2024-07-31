#include <stdio.h>

int main(){

    int x = 0,y = 1,soma;

    for(int i = 0;i < 15;i++){
        printf("%d\n", x);
        soma = x + y;
        x = y;
        y = soma;
    }

    return 0;
}