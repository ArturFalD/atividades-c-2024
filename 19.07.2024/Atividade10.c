#include <stdio.h>

int main(){
    int x = 0,i = 0;
    float soma;

    while (x >= 0){
        printf("Digite um numero: ");
        scanf("%d",&x);
        if(x >= 0){
            soma += x;
            i++;
        }
    }

    printf("Media do numeros: %.1f\n",soma/i);
    
    return 0;
}