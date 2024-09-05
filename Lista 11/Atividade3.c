#include <stdio.h>
#include <string.h>

int main() {
    char string1[30],string2[30];
    int igual = 0,menu;

    printf("Digite aqui uma string 1\n");
    scanf("%s",string1);

    printf("Digite aqui uma string 2\n");
    scanf("%s",string2);

    string1[strlen(string1) + 1] = '\0';

    while (menu != 0){

        printf("Digite uma opcao:\n");
        printf("(1) Ver se as strings sao iguais por iteracao\n");
        printf("(2) Ver se as strings sao iguais por strcmp\n");
        printf("(0) Encerrar programa\n");

        scanf("%d",&menu);

        if(menu == 1){
            for(int i = 0; string1[i] != '\0'; i++){
                if(string1[i] != string2[i]){
                    igual++;
                }
            }

            if(igual != 0){
                printf("As strings sao diferentes\n");
            }else{
                printf("As strings sao identicas\n");
            }

            igual = 0;

        }else if (menu == 2){
            if(strcmp(string1,string2) == 0){
                printf("As strings sao identicas\n");
            }else{
                printf("As strings sao diferentes\n");
            }
        }else if (menu == 0){
            printf("Encerrar programa");
        }else{
            printf("Por favor digite uma opção do menu");
        }
        
    }
    
    return 0;

}