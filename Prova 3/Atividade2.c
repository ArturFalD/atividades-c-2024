/*
(0,6) Escreva um programa em C gere 15 números inteiros aleatórios entre zero e 50 e os armazene em
um vetor. O programa deve mostrar os valores do vetor e informar quantos dos números gerados são
maiores que 25, quantos são iguais a 25 e quantos são menores que 25.

Autor: Artur Falcão Dornelles
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

    int randNum = 0,vet[15],men = 0,mai = 0,igu = 0;
    srand(time(0));

    for(int i = 0; i < 15; i++){

        randNum = rand() % 50;

        vet[i] = randNum;

        if(randNum > 25){
            mai += 1;
        }else if (randNum < 25){
            men += 1;
        }else{
            igu += 1;
        }

    }
    
    printf("O vetor gerado foi:\n(");
    for(int i = 0;i < 15;i++){
        printf("[%d]",vet[i]);
    }
    printf(")\n");

    printf("Quantidade de numeros maiores de 25: %d\n",mai);
    printf("Quantidade de numeros menores de 25: %d\n",men);
    printf("Quantidade de numeros iguas a 25: %d\n",igu);
}