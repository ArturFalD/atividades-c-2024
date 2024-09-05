/*
(0,8) Desenvolva um programa em C que contenha dois vetores para armazenar valores inteiros, sendo o
primeiro com 5 elementos e o segundo com 8 elementos. Os vetores devem ser preenchidos com valores
aleatórios. O programa ainda deve conter um terceiro vetor com 13 posições para armazenar a junção dos
dois primeiros vetores. Os valores dos 3 vetores devem ser apresentados na tela

Autor: Artur Falcão Dornelles
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

    int randNum = 0,vet1[5],vet2[8],vet3[13];

    srand(time(0));

    for(int i = 0; i < 5; i++){

        randNum = rand() % 5;

        vet1[i] = randNum;

    }

    for(int i = 0; i < 8; i++){

        randNum = rand() % 8;

        vet2[i] = randNum;

    }

    for(int i = 0; i < 5; i++){

        randNum = rand() % 5;

        vet3[i] = vet1[i];

    }

    for(int i = 0; i < 8; i++){

        randNum = rand() % 8;

        vet3[i+5] = vet2[i];

    }
    
    printf("Vetor 1:\n(");
    for(int i = 0;i < 5;i++){
        printf("[%d]",vet1[i]);
    }
    printf(")\n");

    printf("Vetor 2:\n(");
    for(int i = 0;i < 8;i++){
        printf("[%d]",vet2[i]);
    }
    printf(")\n");

    printf("Vetor 3:\n(");
    for(int i = 0;i < 13;i++){
        printf("[%d]",vet3[i]);
    }
    printf(")\n");

}