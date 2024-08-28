#include <stdio.h>

void calcFat(int fat){
    
    int fatTemp = 1;

    for(int i = 1;i <= fat;i++){
        fatTemp *= i;
    }

    printf("O fatorial de %d e %d",fat,fatTemp);

}


int main(void){

    int num;

    printf("Digite um numero para ver seu fatorial: \n");
    scanf("%d",&num);
    if(num >= 0){
        calcFat(num);
    }else{
        printf("O numero digitado nao e compativel com os requerimentos\nEncerrando o programa");
    }
    
}