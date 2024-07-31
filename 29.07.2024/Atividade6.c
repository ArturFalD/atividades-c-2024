#include <stdio.h>

int main(){

    int x = 0,soma = 1;
    for(int i = 0;i < 15;i++){
        printf("Digite um numero inteiro positivo: \n");
        scanf("%d",&x);
        for(int j = 1;j <= x;j++){
            soma *= j;
        }
    }
    printf("Soma: %d\n",soma);

    return 0;
}