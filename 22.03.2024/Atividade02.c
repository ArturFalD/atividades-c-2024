#include <stdio.h>

int main() {
    int a,b,temp;

    printf("Escreva o valor de A: ");
    scanf("%d",&a);
    printf("Escreva o valor de B: ");
    scanf("%d",&b);

    temp = b;
    b = a;
    a = temp;

    printf("Valor de A: %d,\n Valor de B: %d", a, b);
    return 0;
}