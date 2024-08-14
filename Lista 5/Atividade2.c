#include <stdio.h>

int main(){
    int idade;

    printf("Digite a idade do jogador: \n");
    scanf("%d",&idade);

    switch (idade){
        case 5 ... 10:
            printf("Jogador na categoria Infantil");
            break;
        case 11 ... 15:
            printf("Jogador na categoria Juvenil");
            break;
        case 16 ... 20:
            printf("Jogador na categoria Junior");
            break;
        case 21 ... 25:
            printf("Jogador na categoria Profissional");
            break;
        default:
            printf("Idade nao representada na tabela de jogadores");
            break;
    };

    return 0;
}