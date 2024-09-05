#include <stdio.h>
#include <string.h>

int main() {
    char texto[100];
    int charContador = 0,tamanho;

    printf("Digite aqui uma string\n");
    scanf("%s",texto);

    tamanho = strlen(texto);

    for(int i = 0; i < tamanho; i++){
        if (texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u' || texto[i] == 'A' || texto[i] == 'E' || texto[i] == 'I' || texto[i] == 'O' || texto[i] == 'U') {
            charContador++;
        }
    }
    
    printf("A string tem %d vogais",charContador);

}