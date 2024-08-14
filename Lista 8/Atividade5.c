#include <stdio.h>

int main(){
    int carros[30],maiorQuant,maiorInd,menorQuant,menorInd;

    for(int i = 0;i < 30;i++){
        printf("Informe um valor para o indice de carros no dia %d:",i + 1);
        scanf("%d",&carros[i]);
    }

    maiorQuant = carros[0];
    maiorInd = 0;
    menorQuant = carros[0];
    menorInd = 0;

    for(int i = 0;i < 30;i++){
        if(carros[i] > maiorQuant){
            maiorInd = i;
            maiorQuant = carros[i];
        }
        if(carros[i] < menorQuant){
            menorInd = i;
            menorQuant = carros[i];
        }
    }

    printf("\n Resumo dos 30 dias: \n");
    for(int i = 0;i < 30;i++){
        printf("Dia %d, passaram %d carros\n",i + 1,carros[i]);
    }
    printf("\n");

    printf("Dia com a menor quantidade de carros: %d, quantidade: %d\n",menorInd + 1,menorQuant);
    printf("Dia com a maior quantidade de carros: %d, quantidade: %d\n",maiorInd + 1,maiorQuant);

    return 0;
}