#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int x[8][6],y[8],soma = 0,numAleatorio = 0;

    srand(time(0));

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 6; j++){
            numAleatorio = rand() % 10;
            x[i][j] = numAleatorio;
        }
    }

    printf("\n");

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 6; j++){
            printf("[%d]",x[i][j]);
            soma += x[i][j];
        }
        y[i] = soma;
        soma = 0;
        printf("\n");
    }

    printf("\n");

    for(int i = 0; i < 8; i++){
        printf("[%d]",y[i]);
    }

    printf("\n");

}