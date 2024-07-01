#include <stdio.h>

int main(){
    float a,b;
    int result;

    printf("Informe dois numeros: \n");
    scanf("%f", &a);
    scanf("%f", &b);

    result = (a != b);

    printf("%d",result);

    return 0;

}