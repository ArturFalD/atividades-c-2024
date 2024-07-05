#include <stdio.h>

int main(){
    int a;

    printf("Informe um valore inteiro: \n");
    scanf("%d", &a);

    if(a <= 10){
        printf("F1");
    }else if(a > 10 && a <= 100){
        printf("F2");
    }else if(a > 100){
        printf("F3");
    }

    return 0;

}