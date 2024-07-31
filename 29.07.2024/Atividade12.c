#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(0));
    int r = 0 + rand() % (50 - 0 + 1),x = -1;
    int cont = 0;
    
    while (x != r){
        printf("Adivinhe o numero entre 0 - 50: \n");
        scanf("%d",&x);
        if (x > r){
            printf("O numero digitado e maior do que o numero aleatorio \n");
        }else if (x < r){
            printf("O numero digitado e menor do que o numero aleatorio \n");
        }
        cont++;
    }

    printf("Voce acertou! o numero era: %d \n",r);
    printf("Tentativas: %d \n",cont);

}