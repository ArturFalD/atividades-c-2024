#include <stdio.h>

int checkDia(int dia,int mes,int ano){

    int maxDias = 0;

    if(ano == 0){
        return 0;
    }

    if(mes < 0 || mes > 12){
        return 0;
    }

    switch (mes){
    case 1:
        maxDias = 31;
        break;
    case 2:
        if(ano % 4 == 0){
            maxDias = 29;
        }else{
            maxDias = 28;
        }
        break;
    case 3:
        maxDias = 31;
        break;
    case 4:
        maxDias = 30;
        break;
    case 5:
        maxDias = 31;
        break;
    case 6:
        maxDias = 30;
        break;
    case 7:
        maxDias = 31;
        break;
    case 8:
        maxDias = 31;
        break;
    case 9:
        maxDias = 30;
        break;
    case 10:
        maxDias = 31;
        break;
    case 11:
        maxDias = 30;
        break;
    case 12:
        maxDias = 31;
        break;
    default:
        return 0;
    }

    if(dia < 0 || dia > maxDias){
        return 0;
    }

    return 1;

}


int main(void){

    int dia,mes,ano;

    printf("Digite o dia: \n");
    scanf("%d",&dia);
    printf("Digite o mes: \n");
    scanf("%d",&mes);
    printf("Digite o ano: \n");
    scanf("%d",&ano);

    if(checkDia(dia,mes,ano) == 0){
        printf("Data invalida");
    }else{
        printf("Data valida");
    }

}