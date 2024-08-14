#include <stdio.h>

int main(){

    int x = 0,par = 0,impar = 0;

    while (x != -999){
        printf("Digite um numero: ");
        scanf("%d",&x);

        if(x % 2 == 0){
            par++;
        }else if(x != -999){
            impar++;
        }
    }
    
    printf("Quantidade de pares: %d \nQuantidade de impares: %d",par,impar);
    
    return 0;
}