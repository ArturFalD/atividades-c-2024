#include <stdio.h>
#include <string.h>

int main() {

    char string1[100],aux;
    int j;

    printf("Digite um valor para a string 1\n");
    scanf("%s",string1);

    j = strlen(string1) - 1;

    for(int i = 0; i < j / 2; i++){
        aux = string1[i];
        string1[i] = string1[j-1];
        string1[j=1] = aux;
        j--;
    }

    printf("%s",string1);

    return 0;

}