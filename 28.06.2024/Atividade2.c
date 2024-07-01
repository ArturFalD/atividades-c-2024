#include <stdio.h>

int main(){
    int a,b,calc;

    printf("Informe 2 valores inteiros: \n");
    scanf("%d", &a);
    scanf("%d", &b);

    if(a == b){
        calc = a * b;
        printf("Os valores são iguais e a multiplicação entre eles é igual a %d", calc);
    }else{
        calc = a + b;
        printf("Os valores são diferentes e a soma entre eles é igual a %d", calc);
    };

    return 0;

}