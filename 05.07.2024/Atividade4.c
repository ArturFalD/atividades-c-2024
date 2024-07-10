#include <stdio.h>

int main(){

    char estado;

    printf("Digite uma letra representadando o estado civil (S),(C),(V),(D) \n");
    scanf("%c",&estado);

    switch (estado){
    case 'S':
        printf("Solteiro(a)");
        break;
    case 's':
        printf("Solteiro(a)");
        break;
    case 'C':
        printf("Casado(a)");
        break;
    case 'c':
        printf("Casado(a)");
        break;
    case 'V':
        printf("Viuvo(a)");
        break;
    case 'v':
        printf("Viuvo(a)");
        break;
    case 'D':
        printf("Divorciado(a)");
        break;
    case 'd':
        printf("Divorciado(a)");
        break;
    default:
        printf("Letra nao representa um estado civil");
        break;
    }

    return 0;
}
