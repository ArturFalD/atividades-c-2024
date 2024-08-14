#include <stdio.h>

int main(){

    int x = 0,y = 0,i = 2;

    printf("Digite um numero inteiro: \n");
    scanf("%d",&x);

    while (i < x){
        if(x % i == 0){
            y = 1;
        }
        i++;
    }

    if(y != 0){
        printf("O numero %d nao e primo",x);
    }else{
        printf("O numero %d e primo",x);
    }
    

    return 0;
}