#include <stdio.h>

int main(){
    int a,b;

    printf("Informe um numero real: \n");
    scanf("%d", &a);
    printf("Informe outro numero real: \n");
    scanf("%d", &b);
    printf("Divisor %d \n", a);
    printf("Dividendo %d \n", b);
    printf("Quociente %d \n", a / b);
    printf("Resto %d \n", a % b);

    return 0;
}