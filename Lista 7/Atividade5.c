#include <stdio.h>

int main(){

    int x = 0,soma = 0,i = 0;
    
    while (x >= 0){
        printf("Digite um numero inteiro positivo: \n");
        scanf("%d",&x);
        if(x >= 0){
            i++;
            soma += x;
        }
    }

    printf("Soma dos numeros: %d\n",soma);
    printf("Media dos numeros: %d\n",soma/i);
    printf("Total de valores: %d\n",i);

    return 0;
}