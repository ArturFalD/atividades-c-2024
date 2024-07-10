#include <stdio.h>
#include <math.h>

int main(){

    int x;
    char menu;

    printf("Digite um numero real: \n");
    scanf("%d",&x);
    printf("Selecione uma opcao: \n A. Raiz Quadrada \n B. Metade do valor \n C. 10 porcento do valor \n D. Dobro do valor \n");
    scanf(" %c",&menu);

    switch (menu){
        case 'a':
            printf("Raiz quadrada de %d = %f",x,sqrt(x));
            break;
        case 'A':
            printf("Raiz quadrada de %d = %f",x,sqrt(x));
            break;
        case 'b':
            printf("Metade de %d = %d",x,x/2);
            break;
        case 'B':
            printf("Metade de %d = %d",x,x/2);
            break;
        case 'c':
            printf("10 porcento de %d = %f",x,x * 0.1);
            break;
        case 'C':
            printf("10 porcento de %d = %f",x,x * 0.1);
            break;
        case 'd':
            printf("Dobro de %d = %d",x,x * 2);
            break;
        case 'D':
            printf("Dobro de %d = %d",x,x * 2);
            break;
        default:
            printf("Essa letra nao e uma opcao do menu");
        break;
        }

    return 0;

}