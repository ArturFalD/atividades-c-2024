#include <stdio.h>

int main(){

    int maior = 0,menor = 0,x = 0;

    while (x >= 0){
        printf("Digite um numero inteiro positivo: \n");
        scanf("%d",&x);
        if(x >= 0){
            if(x > maior){
                maior = x;
            }else if (x < menor){
                menor = x;
            }
        }
    }
    
    printf("Maior numero: %d\n",maior);
    printf("Menor numero: %d\n",menor);

    return 0;
}