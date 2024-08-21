#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int menu = 10,x[5][5],numAleatorio;

    srand(time(0));

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            x[i][j] = numAleatorio = rand() % 10;
        }
    }

    while(menu != 0){

        printf("Digite um numero para realizar uma operacao: \n");
        printf("(1) Mostrar a matriz \n(2) Mostar a diagonal principal \n(3) Mostar a diagonal secundaria \n(4) Mostar elementos abaixo da diagonal \n(5) Mostar elementos acima da diagonal \n");
        printf("Digite (0) para encerrar o programa\n");
        scanf("%d",&menu);

        switch(menu){
        case 1:

            printf("\n");

            for(int i = 0; i < 4; i++){
                for(int j = 0; j < 4; j++){
                    printf("[%d]",x[i][j]);
                }
                printf("\n");
            }

            break;
        
        case 2:

            printf("\n");

            for(int i = 0; i < 4; i++){
                for(int j = 0; j < 4; j++){
                    if(i == j){
                        printf("[%d]",x[i][j]);
                    }else{
                        printf("[ ]");
                    }
                }
                printf("\n");
            }

            break;

        case 3:

            printf("\n");

            for(int i = 0; i < 4; i++){
                for(int j = 0; j < 4; j++){
                    if((3 - i) == j){
                        printf("[%d]",x[i][j]);
                    }else{
                        printf("[ ]");
                    }
                }
                printf("\n");
            }
            break;

        case 4:

            printf("\n");

            for(int i = 0; i < 4; i++){
                for(int j = 0; j < 4; j++){
                    if(i + 1 == j){
                        printf("[%d]",x[i][j]);
                    }else{
                        printf("[ ]");
                    }
                }
                printf("\n");
            }

            break;
        
        case 5:

            printf("\n");

            for(int i = 0; i < 4; i++){
                for(int j = 0; j < 4; j++){
                    if(i - 1 == j){
                        printf("[%d]",x[i][j]);
                    }else{
                        printf("[ ]");
                    }
                }
                printf("\n");
            }

            break;
        
        default:
            break;
        }

        printf("\n");

    }

    return 0;

}