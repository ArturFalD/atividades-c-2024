#include <stdio.h>

int main(){
    int a;

    printf("Informe a velocidade em KM/h: \n");
    scanf("%d", &a);
    printf("A velocidade em M/s = %f", a / 3.6);

    return 0;
}