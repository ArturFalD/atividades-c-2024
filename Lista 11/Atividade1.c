#include <stdio.h>
#include <string.h>

int main(){

    int contador = 0;
    char texto[100];

    printf("Digite aqui uma string\n");
    scanf("%s",texto);

    for (int i = 0; texto[i] != '\0'; i++) {
        if(texto[i] != ' '){
            contador++;
        }
    }

    printf("A string tem %d caracteres",contador);

    return 0;

}