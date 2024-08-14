/*

Autor: Artur Falcão Dornelles

(0,5) Faça um programa em C que leia um número inteiro N menor que 26. O programa deve apresentar
todos os números inteiros de 1 até 100, substituindo os múltiplos do número informado pelo usuário pela
palavra “pi”. Caso o número informado seja maior ou igual a 26, o programa deve apresentar uma
mensagem de erro.
Exemplo:
Número informado: 3.
Saída: 1 2 pi 4 5 pi 7 8 pi 10 11 pi 13 14 pi
*/
#include <stdio.h>

int main(){
    int n;
    printf("Digite um numero inteiro N menor que 26 \n");
    scanf("%d",&n);

    if (n >= 26 || n <= 0){
        printf("O numero informado nao se encaixa nos requerimentos \n");
    }else{
        for(int i = 1;i <= 100;i++){
            if(i % n == 0){
                printf("pi\n");
            }else{
                printf("%d\n",i);
            }
        }
    }
    

    return 0;

}