#include <stdio.h>
#include <string.h>

int main() {
    char string1[100],string2[100];
    int j = 0;

    printf("Digite um valor para a string 1\n");
    fgets(string1, sizeof(string1), stdin);
    for (int i = 0; string1[i] != '\0'; i++) {
        if(string1[i] != ' '){
            string2[j] = string1[i];
            j++;
        }
    }
    j = 0;
    printf("A string ficou assim: %s",string2);

}