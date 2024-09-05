/*
(1,0) Desenvolva um programa em C que preencha uma matriz quadrada de ordem 3 utilizando elementos
da sequência de Fibonacci. Para cada posição da matriz, o programa deve solicitar ao usuário um número
inteiro N, calcular o N-ésimo elemento da sequência de Fibonacci e armazenar o valor calculado na posição
correspondente da matriz. Ao final da execução, o programa deve apresentar a matriz preenchida na tela.
O cálculo do N-ésimo elemento da sequência de Fibonacci deve ser feito em uma função específica, que
recebe o número informado pelo usuário como parâmetro e retorna o resultado para ser armazenado na
matriz. A exibição da matriz na tela deve ser feita por meio de um procedimento separado.

Autor: Artur Falcão Dornelles
*/

#include <stdio.h>

int main(){

    int mat[3][3],num1 = 0,num2 = 1,fibows = 0,rep = 0;

    for(int i = 0;i < 3;i++){
        for(int j = 0;j < 3;j++){
            printf("digite um valor para a linha %d, colina %d da matriz\n",i,j);
            scanf("%d",&rep);

            if(rep <= 0){
                while(rep <= 0){
                    printf("O numero digitado e invalido, por favor digite outro\n");
                    scanf("%d",&rep);
                }
                for(int k = 0;k < rep - 1;k++){
                    fibows = num1 + num2;
                    num2 = num1;
                    num1 = fibows;
                }
                mat[i][j] = fibows;
                num1 = 0;
                num2 = 1;
                fibows = 0;
                rep = 0;

            }else if(rep == 0){
                mat[i][j] = 0;
            }else if(fibows == 1){
                mat[i][j] = 1;
            }else{
                for(int k = 0;k < rep - 1;k++){
                    fibows = num1 + num2;
                    num2 = num1;
                    num1 = fibows;
                }
                mat[i][j] = fibows;
                num1 = 0;
                num2 = 1;
                fibows = 0;
                rep = 0;
            }
        }
    }

    for(int i = 0;i < 3;i++){
        for(int j = 0;j < 3;j++){
            printf("[%d]",mat[i][j]);
        }
        printf("\n");
    }

}