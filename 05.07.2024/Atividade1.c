#include <stdio.h>

int main(){
    int salario,calc;

    printf("Informe o salario recebido: \n");
    scanf("%d",&salario);

    if(salario < 1500){
        calc = salario + (salario * (15.0/100.0));
        printf("O salario recebeu um aumento de 15 porcento, chegando chegando a %d R$",calc);
    }else if (1500 <= salario && salario < 1750){
        calc = salario + (salario * (12.0/100.0));
        printf("O salario recebeu um aumento de 12 porcento, chegando chegando a %d R$",calc);
    }else if (1750 <= salario && salario < 2000){
        calc = salario + (salario * (10.0/100.0));
        printf("O salario recebeu um aumento de 10 porcento, chegando chegando a %d R$",calc);
    }else if (2000 <= salario && salario < 3000){
        calc = salario + (salario * (7.0/100.0));
        printf("O salario recebeu um aumento de 7 porcento, chegando chegando a %d R$",calc);
    }else if (salario >= 3000){
        calc = salario + (salario * (5.0/100.0));
        printf("O salario recebeu um aumento de 5 porcento, chegando chegando a %d R$",calc);
    }
    
    //alterado da pergunta pois se o salario fosse
    //exatamente 3000 não se encaixaria em nem um caso


    return 0;
}