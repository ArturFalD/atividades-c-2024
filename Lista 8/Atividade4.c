#include <stdio.h>

int main(){
    int x[10],y[10],z[10];

    for(int i = 0;i < 10;i++){
        printf("Informe um valor para o indice X[%d]:",i);
        scanf("%d",&x[i]);
    }

    printf("\n");

    for(int i = 0;i < 10;i++){
        printf("Informe um valor para o indice Y[%d]:",i);
        scanf("%d",&y[i]);
    }

    printf("\n");

    for(int i = 0;i < 10;i++){
        if(x[i] == y[i]){
            z[i] = 1;
        }else{
            z[i] = 0;
        }
    }

    printf("\n[");
    for(int i = 0;i < 10;i++){
        printf("(%d)",x[i]);
    }
    printf("]\n");

    printf("\n[");
    for(int i = 0;i < 10;i++){
        printf("(%d)",y[i]);
    }
    printf("]\n");

    printf("\n[");
    for(int i = 0;i < 10;i++){
        printf("(%d)",z[i]);
    }
    printf("]\n");

    return 0;
}