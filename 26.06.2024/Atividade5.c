#include <stdio.h>

int main(){
    int a,b,c;

    printf("Horas trabalhadas no mês: \n");
    scanf("%d", &a);
    printf("Valor da hora trabalhada: \n");
    scanf("%d", &b);
    printf("Percentual de desconto: \n");
    scanf("%d", &c);

    printf("Horas trabalhadas: %d \n",a);
    printf("Salario bruto: %d \n", a * b);
    printf("Total de desconto: %d \n", (c/100) * (a * b));
    printf("Salario liquido: %d \n", (a * b) - (c/100) * (a * b));

    return 0;
}