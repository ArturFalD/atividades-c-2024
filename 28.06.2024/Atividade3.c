#include <stdio.h>

int main(){
    int x,y,z;

    printf("Informe 3 valores inteiros: \n");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    if(x + y > z){
        printf("A soma X + Y e maior do que Z");
    }else if(x + y < z){
        printf("A soma X + Y e menor do que Z");
    }else{
        printf("A soma X + Y e igual a Z");
    }

    return 0;

}