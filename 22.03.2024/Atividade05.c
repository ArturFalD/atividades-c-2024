#include <stdio.h>

int main() {
    int a,b,soma;

    printf("Valor a: ");
    scanf("%d", &a);
    printf("Valor b: ");
    scanf("%d", &b);

    soma = a + b;
    printf("%d + %d = %d \n",a,b,soma);

    soma = a - b;
    printf("%d - %d = %d \n",a,b,soma);

    soma = a * b;
    printf("%d x %d = %d \n",a,b,soma);

    soma = a / b;
    printf("%d / %d = %d",a,b,soma);
    return 0;
}