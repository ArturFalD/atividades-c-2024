#include <stdio.h>

int main(){
    int a,calc;

    printf("Informe a temperatura em Fahrenheit: \n");
    scanf("%d", &a);

    calc = (a - 32)*(5.0/9);

    printf("A temperatura em C = %d", calc);

    return 0;
}