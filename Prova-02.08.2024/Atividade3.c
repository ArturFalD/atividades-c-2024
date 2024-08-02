/*

Autor: Artur Falcão Dornelles

(0,8) Escreva um programa que leia um número inteiro e positivo. O programa deve calcular e apresentar
a soma dos números primos entre 1 e o número informado pelo usuário.
*/
#include <stdio.h>

int main(){
    int n,soma = 0,naoPrimo = 0;

    printf("Digite um numero inteiro positivo \n");
    scanf("%d",&n);

    if(n <= 0){
        printf("O numero informado nao se encaixa nos requerimentos \n");
    }else{
        for(int i = 2;i <= n;i++){
            for(int j = 2;j < i;j++){
                if(i % j == 0){
                    naoPrimo = 1;
                }
            }
            if(naoPrimo == 1){
                naoPrimo = 0;
            }else{
            soma += i;
            }
        }
        printf("A soma total dos numeros primos entre 1 e %d = %d",n,soma);
    }

    return 0;

}