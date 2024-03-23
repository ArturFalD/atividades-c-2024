#include <stdio.h>

int main() {
    int a,b,c,d,soma;

    printf("Informe sua idade: ");
    scanf("%d", &a);
    printf("Informe sua idade: ");
    scanf("%d", &b);
    printf("Informe sua idade: ");
    scanf("%d", &c);
    printf("Informe sua idade: ");
    scanf("%d", &d);

    soma = (a + b + c + d) / 4;
    printf("A média aritmética das idades é: %d \n", soma);
}