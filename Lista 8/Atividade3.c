#include <stdio.h>

int main(){
    int x[20];

    for(int i = 0;i < 10;i++){
        printf("Informe um valor para o indice %d:",i);
        scanf("%d",&x[i]);
    }
    for(int i = 0;i < 10;i++){
        if(i % 2 == 0){
            x[i+10] = x[i] + (0.02 * x[i]);
        }else{
            x[i+10] = x[i] + (0.05 * x[i]);
        }
    }
    printf("\n[");
    for(int i = 0;i < 20;i++){
        printf("(%d)",x[i]);
    }
    printf("]\n");
    
    return 0;

}