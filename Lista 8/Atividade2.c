#include <stdio.h>

int main(){
    int x[6],y[6],cont = 1;

    for(int i = 0;i <= 6;i++){
        printf("Informe um valor para o vetor X\n");
        scanf("%d",&x[i]);
    }

    for(int i = 0;i < 6;i++){
        y[i] = x[cont];
        cont++;
        if(cont == 6){
            cont = 0;
        }
    }


    printf("\nVetor X: [");
    for(int i = 0;i < 6;i++){
        printf("(%d)",x[i]);
    }
    printf("]\n");
    printf("\nVetor Y: [");
    for(int i = 0;i < 6;i++){
        printf("(%d)",y[i]);
    }
    printf("]\n");
    return 0;
}