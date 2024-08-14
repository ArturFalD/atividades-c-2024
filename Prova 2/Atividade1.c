/*
Autor: Artur Falcão Dornelles
(0,5) Escreva um programa em C que leia o sexo, o peso e a altura de uma pessoa. O programa deve
calcular o Índice de Massa Corporal (IMC) com base nos dados inseridos e apresentar a classificação
conforme o quadro abaixo:
*/

#include <stdio.h>

int main(){

    char nome;
    float altura,peso,imc;
    int sexo;

    printf("Informe o nome da pessoa: \n");
    scanf("%s", &nome);
    printf("Informe o sexo da pessoa \n (1) Masculino \n (2) Feminino: \n");
    scanf(" %d", &sexo);
    printf("Informe informe a altura da pessoa (Em metros): \n");
    scanf(" %f", &altura);
    printf("Informe informe o peso da pessoa (Em quilos): \n");
    scanf(" %f", &peso);

    imc = peso / (altura * altura);

    if(sexo == 1){
        if(imc < 20){
            printf("IMC = Abaixo do peso (%f)",imc);
        }else if (imc >= 20 && imc < 25){
            printf("IMC = Normal (%f)",imc);
        }else if (imc >= 25 && imc < 30){
            printf("IMC = Obesidade Leve (%f)",imc);
        }else if (imc >= 30 && imc < 40){
            printf("IMC = Obesidade Moderada (%f)",imc);
        }else{
            printf("IMC = Obesidade Morbida (%f)",imc);
        }
    }else if(sexo == 2){
        if(imc < 19){
            printf("IMC = Abaixo do peso (%f)",imc);
        }else if (imc >= 19 && imc < 24){
            printf("IMC = Normal (%f)",imc);
        }else if (imc >= 24 && imc < 29){
            printf("IMC = Obesidade Leve (%f)",imc);
        }else if (imc >= 29 && imc < 39){
            printf("IMC = Obesidade Moderada (%f)",imc);
        }else{
            printf("IMC = Obesidade Morbida (%f)",imc);
        }
    }else{
        printf("Por favor utilize apenas 1 ou 2 para informar o sexo");
    }
    
    return 0;
    
}