#include <stdio.h>
#include <string.h>

int main() {

    char string1[100],char1,char2;

    printf("Digite um valor para a string 1\n");
    scanf("%s",string1);

    printf("Digite um valor para substituir na string 1\n");
    scanf(" %c",&char1);

    printf("Digite um valor para repor o valor substituido na string 1\n");
    scanf(" %c",&char2);

    for(int i = 0;string1[i] != '\0'; i++){
        if(string1[i] == char1){
            string1[i] = char2;
        }
    }

    printf("A string ficou assim: %s",string1);

    return 0;

}