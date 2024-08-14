#include <stdio.h>

int main(){
    int x[10],temp;

    for(int i = 0;i < 10;i++){
        printf("Informe um valor para o indice x[%d]:",i);
        scanf("%d",&x[i]);
    }
    
    temp = x[0];

    for(int i = 0; i < 9;i++){
        x[i] = x[i+1];
    }

    x[9] = temp;

    printf("\n[");
    for(int i = 0;i < 10;i++){
        printf("(%d)",x[i]);
    }
    printf("]\n");

    return 0;
}