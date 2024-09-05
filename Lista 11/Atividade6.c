#include <stdio.h>
#include <string.h>

int main() {

    char string1[100];
    int j,palindromo = 1;

    printf("Digite um valor para a string 1\n");
    scanf("%s",string1);

    j = strlen(string1) - 1;

    for(int i = 0; i < j / 2; i++){
        if(string1[i] != string1[j - i]){
            palindromo = 0;
        }
    }

    if(palindromo == 1){
        printf("A string %s e um plaindromo\n",string1);
    }else{
        printf("A string %s nao e um palindromo\n",string1);
    }

    return 0;

}