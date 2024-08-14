#include <stdio.h>

int main(){

    int x;

    printf("Digite aqui um numero de 1 - 10: \n");
    scanf("%d",&x);

    if(x == 1){
        printf("Um");
    }else if (x == 2){
        printf("Dois");
    }else if (x == 3){
        printf("Tres");
    }else if (x == 4){
        printf("Quatro");
    }else if (x == 5){
        printf("Cinco");
    }else if (x == 6){
        printf("Seis");
    }else if (x == 7){
        printf("Sete");
    }else if (x == 8){
        printf("Oito");
    }else if (x == 9){
        printf("Nove");
    }else if (x == 10){
        printf("Dez");
    }else{
        printf("Numero invalido");
    }

    return 0;

}