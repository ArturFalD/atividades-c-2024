#include <stdio.h>

int main(){
    int x,y;
    float calc;

    printf("Informe as notas do aluno: \n");
    scanf("%d", &x);
    scanf("%d", &y);

    calc = (x + y) / 2;

    if(calc >= 0.0 && calc <= 4.9){
        printf("Nota: %f \n Conceito: Insuficiente",calc);
    }else if(calc >= 5.0 && calc <= 6.4){
        printf("Nota: %f \n Conceito: Regular",calc);
    }else if(calc >= 6.5 && calc <= 8.4){
        printf("Nota: %f \n Conceito: Bom",calc);
    }else if(calc >= 8.5 && calc <= 10.0){
        printf("Nota: %f \n Conceito: Otimo",calc);
    }else{
        printf("O resultado da media e invalido %f",calc);
    }

    return 0;

}