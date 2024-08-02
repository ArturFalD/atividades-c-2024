/*

Autor: Artur Falcão Dornelles

Construa um programa que solicita a idade e sexo de um grupo indefinido de pessoas. O programa
deve encerrar quando o usuário informar que não deseja inserir um novo cadastro. No final, o programa
deve informar quantas pessoas de cada sexo são maiores de idade (>=18), a média de idade de homens, a
média de idade de mulheres e a média de idade de todo o grupo.
*/
#include <stdio.h>

int main(){
    int idade = 0,quantMaiM = 0,quantMaiF = 0,quantM = 0,quantF = 0,somaM = 0,somaF = 0,menu = 1,sexo = 0;

    while (menu == 1){
        printf("Adicionar nova pessoa (1)\n");
        printf("Parar programa (2)\n");
        scanf("%d",&menu);

        if(menu == 1){
            printf("Digite o sexo da pessoa:\n");
            printf("(1) Masc\n");
            printf("(2) Fem\n");
            scanf("%d",&sexo);

            if(sexo == 1){
                quantM++;
                printf("Digite a idade da pessoa\n");
                scanf("%d",&idade);
                if(idade >= 18){
                    quantMaiM++;
                }
                somaM += idade;
            }else{
                quantF++;
                printf("Digite a idade da pessoa\n");
                scanf("%d",&idade);
                if(idade >= 18){
                    quantMaiF++;
                }
                somaF += idade;
            }
            printf("\n-----------\n");
            if(sexo == 1){
                printf("Sexo: Masc\n");
            }else{
                printf("Sexo: Fem\n");
            }
            printf("Idade: %d\n",idade);
            printf("-----------\n\n");
    
        }else{
            printf("Pessoas maiores de idade (Fem): %d\n",quantMaiF);
            printf("Pessoas maiores de idade (Masc): %d\n",quantMaiM);
            printf("Media das idades dos homens: %d\n",somaM/quantM);
            printf("Media das idades das mulheres: %d\n",somaF/quantF);
            printf("Media das idades do grupo: %d\n",(somaM + somaF)/(quantM + quantF));
        }
        
    }
    
    return 0;

}