#include <stdio.h>

int main(){

    int x = 0,y = 0,i = 0;
    float soma = 0;

    printf("Quantos numeros para fazer a media? \n");
    scanf("%d",&x);
    while (i < x){
        printf("Digite um numero para fazer a media: \n");
        scanf("%d",&y);
        soma += y;
        i++;
    }
    printf("Media dos numeros: %.2f",soma/i);
}