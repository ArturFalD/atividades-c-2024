#include <stdio.h>

int main(){
    int a,b;
    
    printf("Informe 2 valores inteiros: \n");
    scanf("%d", &a);
    scanf("%d", &b);

    if(a == b){
        printf("Os dois numeros sao iguais \n");
    }else{
        if(a < b){
            printf("%d \n",b);
            printf("%d \n",a);
        }else{
            printf("%d \n",a);
            printf("%d \n",b);
        }
    }
    
    return 0;

}