#include <stdio.h>

int main(){
    char array[100];

    for(int i = 0;i < 100;i++){
        if(i % 2 == 0){
            array[i] = 'X';
        }else{
            array[i] = 'O';
        }
    }

    array[100] = '\0';

    printf("%s",array);

    return 0;
}