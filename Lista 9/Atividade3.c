#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int x[2][3],y[3][2],numAleatorio;

    srand(time(0));

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            numAleatorio = rand() % 10;
            x[i][j] = numAleatorio;
            y[j][i] = numAleatorio;
        }
    }

    printf("\n");

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("[%d]",x[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            printf("[%d]",y[i][j]);
        }
        printf("\n");
    }

}