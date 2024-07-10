#include <stdio.h>

int main(){
    char letra;

    printf("Digite uma letra: \n");
    scanf("%c",&letra);

    switch (letra){
    case 'a':
        printf("A letra e vogal");
        break;
    case 'e':
        printf("A letra e vogal");
        break;
    case 'i':
        printf("A letra e vogal");
        break;
    case 'o':
        printf("A letra e vogal");
        break;
    case 'u':
        printf("A letra e vogal");
        break;
    default:
        printf("A letra e consoante");
        break;
    }

    return 0;
}