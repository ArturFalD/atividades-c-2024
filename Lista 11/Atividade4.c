#include <stdio.h>
#include <string.h>

int main() {
    char string1[100],string2[100],string3[100];
    int menu = 1;

    printf("Digite um valor para a string 1\n");
    scanf("%s",string1);

    printf("Digite um valor para a string 2\n");
    scanf("%s",string2);

    while (menu != 0){

        printf("Digite uma opcao:\n");
        printf("(1) Juntar strings por iteracao\n");
        printf("(2) Juntar strings por strcat\n");
        printf("(0) Encerrar programa\n");

        scanf("%d",&menu);

        if(menu == 1){

            char strTemp[] = "a";
            int cont1 = 0,cont2 = 0;
    
            sprintf(strTemp,string1);

            printf("String 1: %s\n",string1);

                while (string1[cont1] != '\0') {
                    string3[cont1] = string1[cont1];
                    cont1++;
                }

                while (string2[cont2] != '\0') {
                    string3[cont1] = string2[cont2];
                    cont1++;
                    cont2++;
                }
                string3[cont1] = '\0';
            

            printf("String 2: %s\n",string2);
            printf("String 3: %s\n",string3);

            sprintf(string3,strTemp);

            cont1 = 0;
            cont2 = 0;

        }else if (menu == 2){

            char strTemp[] = "a";

            sprintf(strTemp,string1);

            printf("String 1: %s\n",string1);
            strcat(string1,string2);
            printf("String 2: %s\n",string2);
            printf("String 3: %s\n",string1);

            sprintf(string1,strTemp);


        }else if (menu == 0){
            printf("Programa encerrado\n");
        }else{
            printf("Por favor digite uma opcaoo do menu\n");
        }
        
    }
    
    return 0;

}