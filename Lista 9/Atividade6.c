#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    printf("\n");

    int x[7],y[7],mat[7][2],numAleatorio;

    srand(time(0));

    for(int i = 0; i < 7; i++){
        x[i] = numAleatorio = rand() % 10;
    }
    for(int i = 0; i < 7; i++){
        y[i] = numAleatorio = rand() % 10;
    }

    for(int i = 0; i < 7; i++){
        printf("[%d]",x[i]);
    }
    printf("\n");
    for(int i = 0; i < 7; i++){
        printf("[%d]",y[i]);
    }
    printf("\n");

    printf("\n");

    for(int i = 0; i < 7; i++){
        mat[i][0] = x[i];
        mat[i][1] = y[i];
    }

    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 2; j++){
            printf("[%d]",mat[i][j]);
        }
        printf("\n");
    }

    printf("\n");

}