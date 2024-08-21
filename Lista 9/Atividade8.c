#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int x[7][5],numAleatorio,col = 0,lin = 0,menu = 0;

    srand(time(0));

    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 5; j++){
            numAleatorio = rand() % 10;
            x[i][j] = numAleatorio;
        }
    }

    printf("\n");

    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 5; j++){
            printf("[%d]",x[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    while(menu == 0){
        lin = rand() % 5;
        col = rand() % 7;

        printf("O numero selecionado foi [%d] da linha %d coluna %d\n",x[lin][col],lin,col);
        printf("Digite (0) para mostrar outro numero\nDigite qualquer outro numero para encerrar o programa\n");
        scanf("%d",&menu);
    }
    

}