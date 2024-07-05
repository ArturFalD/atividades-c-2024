#include <stdio.h>

int main(){
    int a;
    
    printf("Informe o codigo do lanche\n");
    scanf("%d", &a);

    switch (a){
    case 10:
        printf("Xis completo, preco 12,00 \n");
        break;
    
    case 11:
        printf("Xis bacon, Preco 16,50 \n");
        break;
    
    case 12:
        printf("Xis de coracao de boi, Preco 14,00 \n");
        break;
    
    case 13:
        printf("Xis de charque, Preco 14,50 \n");
        break;
    
    case 14:
        printf("Xis de ovelha, Preco 20,90 \n");
        break;
    
    case 15:
        printf("Xis de linguica campeira, Preco: 18,00 \n");
        break;

    default:
        printf("Esse lanche nao existe \n");
        break;
    }

    return 0;
}