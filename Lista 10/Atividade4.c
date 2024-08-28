#include <stdio.h>

int calcFat(int fat){
    
    int fatTemp = 1;

    for(int i = 1;i <= fat;i++){
        fatTemp *= i;
    }

    return fatTemp;

}

void calc(int num1,int num2){
    
    int temp;
    temp = (calcFat(num1) / calcFat(num2))*calcFat(num1 - num2);
    
    printf("O resultado da equacao I!/J!*(I-J) e igual a %d",temp);
}

int main(void){

    int num1,num2;

    printf("Digite o numero I: \n");
    scanf("%d",&num1);
    printf("Digite o numero J: \n");
    scanf("%d",&num2);

    calc(num1,num2);
}