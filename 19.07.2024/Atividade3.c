#include <stdio.h>

int main(){

    int i,n1,n2,n3;
    char nome[30];

    for(i = 0;i < 20;i++){

        printf("\nDigite o nome do aluno: \n");
        scanf("%s",nome);

        printf("Digite a nota 1 do aluno: \n");
        scanf("%d",&n1);

        printf("Digite a nota 2 do aluno: \n");
        scanf("%d",&n2);

        printf("Digite a nota 3 do aluno: \n");
        scanf("%d",&n3);

        printf("\n Aluno: %s\n Nota 1: %d\n Nota 2: %d\n Nota 3: %d\n Media: %d \n",nome,n1,n2,n3,(n1+n2+n3)/3);
    }

    return 0;
}