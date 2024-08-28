#include <stdio.h>

void quadrado(void){

    int base,altura;

    printf("Digite o tamanho da base: \n");
    scanf("%d",&base);
    printf("Digite o tamanho da altura: \n");
    scanf("%d",&altura);
    printf("Area do quadrado digitado: %d\n",base*altura);

}

void triangulo(void){

    int base,altura;

    printf("Digite o tamanho da base: \n");
    scanf("%d",&base);
    printf("Digite o tamanho da altura: \n");
    scanf("%d",&altura);
    printf("Area do quadrado digitado: %d\n",(base*altura)/2);

}

int main(void){

    int menu = 1;

    while (menu == 1 || menu == 2){
    
        printf("Qual area deseja calcular?\n");
        printf("(1) Triangulo\n");
        printf("(2) Quadrado\n");
        printf("Precione qualquer outra tecla para encerrar programa\n");
        scanf("%d",&menu);

        if(menu == 1){
            quadrado();
        }else if(menu == 2){
            quadrado();
        }
        
    }

    printf("\nPrograma encerrado");
    
}