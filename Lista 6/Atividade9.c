#include <stdio.h>

int main(){

    int b,e=0,x;

    printf("Digite o numero: \n");
    scanf("%d",&b);
    printf("Digite o expoente: \n");
    scanf("%d",&e);

    x = b;
    
    if(e != 0){
        for(int i = 0;i < (e-1); i++){
            b *= x;
        }
    }else{
        b = 1;
    }

    printf("Resultado da equacao: %d \n",b);

    return 0;
}