/*
Autor: Artur Falcão Dornelles
(0,5) Triângulos são figuras geométricas formadas por três segmentos de reta que se encontram nas
extremidades. Assim, são polígonos com três lados, três ângulos e três vértices. Um triângulo é um
polígono que possui, necessariamente, três lados.

Faça um programa em C que receba 3 números inteiros digitados pelo usuário e verifique se são valores
válidos para os lados de um triângulo (cada lado deve ser menor que a soma dos outros dois lados). Se
forem, o programa deverá informar se o triângulo é equilátero, isósceles ou escaleno.
*/

#include <stdio.h>

int main(){

    int a,b,c;

    printf("Informe o tamanho do lado A: \n");
    scanf("%d", &a);
    printf("Informe o tamanho do lado B: \n");
    scanf("%d", &b);
    printf("Informe o tamanho do lado C: \n");
    scanf("%d", &c);

    if(a + b > c && b + c > a && a + c > b){
        if(a == b && b == c && c == a){
            printf("O triangulo informado e equilatero \n");
        }else if ((a == b && a != c) || (b == c && b != a) || (c == a && c != b)){
            printf("O triangulo informado e isoceles \n \n");
        }else{
            printf("O triangulo informado e escaleno \n \n");
        }
    }else{
        printf("As medidas informadas não equivalem a um triangulo");
    }

    return 0;
    
}