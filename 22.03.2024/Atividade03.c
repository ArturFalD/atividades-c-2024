#include <stdio.h>
#include <math.h>

int main() {
    int a,b,c,soma;

    printf("Valor a: ");
    scanf("%d", &a);
    printf("Valor b: ");
    scanf("%d", &b);
    printf("Valor c: ");
    scanf("%d", &c);

    soma = pow(b, 2) + pow(b, 2) + pow(b, 2);

    printf("Soma total: %d",soma);
    return 0;
}