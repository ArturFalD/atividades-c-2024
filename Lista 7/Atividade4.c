#include <stdio.h>

int main(){

    int x = 0,j = 0,i = 2;

    printf("Digite um numero inteiro: \n");
    scanf("%d",&x);
    while (j <= x){
        int naoPrimo = 0;
        while (i < j){
            if(j % i == 0){
                naoPrimo = 1;
            }
            i++;
        }
        if (!naoPrimo) {
            printf("%d\n", j);
        }
        i = 2;
        j++;
    }

}