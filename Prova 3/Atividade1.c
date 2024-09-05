/*
(0,6) Escreva um programa para simular uma calculadora básica. O programa deve apresentar um menu
com opções para o usuário. contemplando as seguintes operações: adição, subtração, multiplicação,
divisão, potência e raiz quadrada. Cada funcionalidade deve ser implementada em uma sub-rotina que
deve ser invocada através de uma estrutura de caso, conforme a opção escolhida pelo usuário.

Autor: Artur Falcão Dornelles
*/

#include <stdio.h>
#include <math.h>

void soma(){

    int x,y;

    printf("Digite o valor de X\n");
    scanf("%d",&x);

    printf("Digite o valor de Y\n");
    scanf("%d",&y);

    printf("O valor da soma entre X e Y e igual a: %d\n\n",x + y);

}

void subtracao(){

    int x,y;

    printf("Digite o valor de X\n");
    scanf("%d",&x);

    printf("Digite o valor de Y\n");
    scanf("%d",&y);

    printf("O valor da subtracao entre X e Y e igual a: %d\n\n",x - y);

}

void multiplicacao(){

    int x,y;

    printf("Digite o valor de X\n");
    scanf("%d",&x);

    printf("Digite o valor de Y\n");
    scanf("%d",&y);

    printf("O valor da multiplicacao entre X e Y e igual a: %d\n\n",x * y);

}

void divisao(){

    int x,y;

    printf("Digite o valor de X\n");
    scanf("%d",&x);

    printf("Digite o valor de Y\n");
    scanf("%d",&y);

    printf("O valor da divisao entre X e Y e igual a: %d\n\n",x / y);

}

void potencia(){

    int x,y;

    printf("Digite o valor de X (base)\n");
    scanf("%d",&x);

    printf("Digite o valor de Y (expoente)\n");
    scanf("%d",&y);

    printf("O valor da potenciaciao de X elevado a Y e igual a: %.2f\n\n",pow(x,y));

}

void raizQuadrada(){

    int x;

    printf("Digite o valor de X\n");
    scanf("%d",&x);

    if (x < 0){
        printf("Procedimento invalido\n");
    }else{
        printf("O valor da raiz quadrada de X: %.2f\n\n",sqrt(x));
    }
}

int main(){

    int menu = 1;

    while (menu != 0){
        printf("Digite uma das opcoes para realizar uma opearacao\n");
        printf("(1) Adicao\n");
        printf("(2) Subtracao\n");
        printf("(3) Multiplicacao\n");
        printf("(4) Divisao\n");
        printf("(5) Potencia\n");
        printf("(6) Raiz Quadrada\n");
        printf("(0) Encerrar programa\n");
        
        scanf("%d",&menu);

        if(menu == 1){
            soma();
        }else if (menu == 2){
            subtracao();
        }else if (menu == 3){
            multiplicacao();
        }else if (menu == 4){
            divisao();
        }else if (menu == 5){
            potencia();
        }else if (menu == 6){
            raizQuadrada();
        }else if (menu == 0){
            printf("Programa encerrado\n");
        }else{
            printf("Por favor, digite um dos numeros informados no menu\n");
        }
        
    }

    return 0;

}