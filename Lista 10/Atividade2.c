#include <stdio.h>

void calcMedia(int vetor[10]){
    
    float soma = 0;

    for(int i = 0;i < 10;i++){
        soma += vetor[i];
    }

    printf("A media das notas e %.1f\n",soma/10);

}

void calcSoma(int vetor[10]){

    int soma = 0;

    for(int i = 0;i < 10;i++){
        soma += vetor[i];
    }

    printf("A soma das notas e %d\n",soma);

}

void maiorNota(int vetor[10]){

    int maior = 0;

    for(int i = 0;i < 10;i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }

    printf("A maior nota e %d\n",maior);

}

void menorNota(int vetor[10]){

    int menor = 0;

    for(int i = 0;i < 10;i++){
        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }

    printf("A menor nota e %d\n",menor);
}


int main(void){

    int menu = 1,vetor[10],num;

    for(int i = 0;i < 10;i++){
        num = 0;
        printf("Insira o valor do para a nota do indice: %d\n",i);
        scanf("%d",&num);
        vetor[i] = num;
    }

    while (menu != 0){
    
        printf("Qual area deseja calcular?\n");
        printf("(1) Calcular media\n");
        printf("(2) Calcular somatorio\n");
        printf("(3) Achar maior nota\n");
        printf("(4) Achar menor nota\n");
        printf("(0) Finalizar programa\n");

        scanf("%d",&menu);
        
        if(menu == 1){
            calcMedia(vetor);
        }else if (menu == 2){
            calcSoma(vetor);
        }else if (menu == 3){
            maiorNota(vetor);
        }else if (menu == 4){
            menorNota(vetor);
        }else if (menu == 0){
            break;
        }
        

    }

    printf("\nPrograma encerrado");
    
}