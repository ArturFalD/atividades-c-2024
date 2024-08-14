#include <stdio.h>

int main() {
    int a,soma;

    printf("Informe sua idade: ");
    scanf("%d", &a);

    soma = a * 2;
    printf("O dobro de sua idade é: %d \n", soma);

    soma = a * 3;
    printf("O triplo de sua idade é: %d", soma);    
    return 0;
}