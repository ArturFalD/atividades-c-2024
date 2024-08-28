#include <stdio.h>
#include <math.h>

void dobro(int num){
    printf("O dobro de %d e %d",num,num*2);
}

void triplo(int num){
    printf("O triplo de %d e %d",num,num*3);
}

void metade(int num){

    float temp = (float)num/2;

    printf("A metade de %d e %.2f",num,temp);
}

void quadrado(int num){
    printf("O quadrado de %d e %d",num,num*num);
}

void cubo(int num){
    printf("O cubo de %d e %d",num,num*num*num);
}

void raizQuadrada(int num){

    float temp = sqrt(num);

    printf("A raiz quadrada de %d e %.1f",num,temp);
}

void raizCubica(int num){

    float temp = cbrt(num);

    printf("A raiz cubica de %d e %.1f",num,temp);
}

void modulo(int num){

    int temp = num;

    if(num < 0){
        temp = num * -1;
    }
    printf("O modulo de %d e %d",num,temp);
}

void inverso(int num){

    float temp = (float)1/num;

    printf("O inverso de %d e %.2f",num,temp);
}

int main(void){

    int menu = 1,num;

    printf("Insira o valor para fazer mudancas\n");
    scanf("%d",&num);

    while (menu != 0){
    
        printf("\n\nQual mudanca deseja exibir?\n");
        printf("(1) Dobro\n");
        printf("(2) Triplo\n");
        printf("(3) Metade\n");
        printf("(4) Quadrado\n");
        printf("(5) Cubo\n");
        printf("(6) Raiz Quadrada\n");
        printf("(7) Raiz Cubica\n");
        printf("(8) Modulo\n");
        printf("(9) Inverso\n");
        printf("(0) Finalizar programa\n");

        scanf("%d",&menu);
        
        if(menu == 1){
            dobro(num);
        }else if (menu == 2){
            triplo(num);
        }else if (menu == 3){
            metade(num);
        }else if (menu == 4){
            quadrado(num);
        }else if (menu == 5){
            cubo(num);
        }else if (menu == 6){
            raizQuadrada(num);
        }else if (menu == 7){
            raizCubica(num);
        }else if (menu == 8){
            modulo(num);
        }else if (menu == 9){
            inverso(num);
        }else if (menu == 0){
            break;
        }
        

    }

    printf("\nPrograma encerrado");
    
}