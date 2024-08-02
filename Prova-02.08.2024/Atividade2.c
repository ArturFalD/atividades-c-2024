/*

Autor: Artur Falcão Dornelles

(0,5) Um número perfeito é um número que é igual a soma dos seus divisores próprios (excluindo ele
mesmo). Exemplo:
• Número: 6
• Divisores próprios do número 6: 1, 2 e 3
• Soma dos divisores: 6
Escreva um programa em C que leia um número inteiro positivo e mostre uma mensagem dizendo se
o número informado é perfeito ou não.
*/
#include <stdio.h>

int main(){
    int n,soma = 0;

    printf("Digite um numero inteiro positivo \n");
    scanf("%d",&n);

    if(n <= 0){
        printf("O numero informado nao se encaixa nos requerimentos \n");
    }else{
        for(int i = 1;i < n;i++){
            if(n % i == 0){
                soma += i;
            }
        }

        if (soma == n){
            printf("%d e um numero perfeito",n);
        }else{
            printf("%d nao e um numero perfeito",n);
        }
    }

    return 0;

}