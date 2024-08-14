#include <stdio.h>

int main(){

    int soma = 0;

    for(int i = 0;i <= 100;i++){
        if(i % 2 == 0){
            soma += i;
        }
    }

    printf("Soma: %d", soma);
    
    return 0;
}