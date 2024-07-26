#include <stdio.h>

int main(){

    int i = 0,x = 1;

    printf("Digite um numero inteiro positivo: \n");
    scanf("%d",&x);

    do{
        if((i % 2) == 0){
            printf("%d \n",i);
        }
        i++;
    }while(i <= x);

    
    return 0;
}