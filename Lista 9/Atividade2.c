#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int menu = 10,x[5][5],numAleatorio,somaDiagonalP = 0,somaDiagonalS = 0,somaTotal = 0,selecionar = 0,soma = 0;;

    srand(time(0));

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            x[i][j] = numAleatorio = rand() % 10;

            if(i == j){
                somaDiagonalP += x[i][j];
            }
            if((4 - i) == j){
                somaDiagonalS += x[i][j];
            }

            somaTotal += x[i][j];
        }
    }

    printf("\n");

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("[%d]",x[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    while(menu != 0){

        printf("Digite um numero para realizar uma operacao: \n");
        printf("(1) Somar uma linha \n(2) Somar uma coluna \n(3) Somar a diagonal principal \n(4) Somar a diagonal secundaria \n(5) Somar toda matriz \n");
        printf("Digite (0) para encerrar o programa\n");
        scanf("%d",&menu);

        switch(menu){
        case 1:
            printf("Digite uma linha \n");
            scanf("%d",&selecionar);

                for(int i = 0; i < 5; i++){
                    soma += x[selecionar][i];
                }

                printf("\n");
                printf("A soma da linha e: %d",soma);
                printf("\n");

            break;
        
        case 2:
            printf("Digite uma coluna \n");
            scanf("%d",&selecionar);

                for(int i = 0; i < 5; i++){
                    soma += x[i][selecionar];
                }

                printf("\n");
                printf("A soma da coluna e: %d",soma);
                printf("\n");

            break;

        case 3:
            printf("Soma da diagonal principal: %d\n",somaDiagonalP);
            break;
        
        case 4:
            printf("Soma da diagonal secundaria: %d\n",somaDiagonalS);
            break;
        
        case 5:
            printf("Soma do total da matriz: %d\n\n",somaTotal);
            break;
        
        default:
            break;
        }

        soma = 0;

        printf("\n");

    }

    return 0;

}