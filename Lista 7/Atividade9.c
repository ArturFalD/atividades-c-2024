#include <stdio.h>

int main(){

    int negativoContador = 0,positivoContador = 0,x = 1;
    float soma = 0;

    while (x != 0){
        printf("Digite um numero inteiro: \n");
        scanf("%d",&x);
        if(x < 0){
            negativoContador++;
        }else if (x > 0){
            soma += x;
            positivoContador++;
        }
    }
    
    printf("Quantidade de numeros negativos: %d\n",negativoContador);
    printf("Media aritimetica dos numeros positivos: %.2f\n",soma/positivoContador);

    return 0;
}