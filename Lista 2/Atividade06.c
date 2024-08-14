#include <stdio.h>

int main() {
    double dolar,real,soma;

    printf("Informe a cotação do Dólar: ");
    scanf("%lf", &dolar);
    printf("Informe a quantidade de Reais a ser convertida:");
    scanf("%lf", &real);

    soma = real / dolar;

    printf("Cotação em dolar: %lf \n", dolar);
    printf("Valor em real: %lf \n", real);
    printf("Valor em dolar: %lf \n", soma);
    
    return 0;
}