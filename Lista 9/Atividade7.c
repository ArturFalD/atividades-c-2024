#include <stdio.h>

int main(){

    int x[7][8];

    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 8; j++){
            x[i][j] = i + j;
        }
    }

    printf("\n");

    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 8; j++){
            printf("  [%d]  ",x[i][j]);
        }
        printf("\n");
    }

    printf("\n");

}