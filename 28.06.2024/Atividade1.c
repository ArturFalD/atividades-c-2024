#include <stdio.h>

int main(){
    int a,b,c,result;

    printf("Informe 3 valores inteiros: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    result = (a + b) * (c * c);

    printf("%d",result);

    if (result % 2 == 0){
        printf(" O resultado = par");
    }else{
        printf(" O resultado = impar");
    };

    return 0;

}