#include <stdio.h>

int main() {
    double pi,resultado,rad,alt;

    pi = 3.14;

    printf("Digite a altura (em cm): ");
    scanf("%lf", &alt);
    printf("Digite o raio (em cm): ");
    scanf("%lf", &rad);

    resultado = (pi * (rad * rad) * alt);

    printf("Volume do cilindro: %lf cm", resultado);
    return 0;
}