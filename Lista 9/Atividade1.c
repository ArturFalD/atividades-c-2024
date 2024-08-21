#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int x[4][4],numAleatorio,somaDiagonal = 0,somaTotal;

    srand(time(0));

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            x[i][j] = numAleatorio = rand() % 10;

            if(i == j){
                somaDiagonal += x[i][j];
            }

            somaTotal += x[i][j];
        }
    }

    printf("\n");

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("[%d]",x[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("Soma da diagonal principal: %d\n",somaDiagonal);
    printf("Soma do total da matriz: %d\n\n",somaTotal);
}