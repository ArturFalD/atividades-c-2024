#include <stdio.h>

int main(){
    int a,b,c;
    
    printf("Informe 3 valores inteiros: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a == b || a == c || b == c){
        printf("Ha dois ou mais numeros iguais \n");
    }else{
        if(a < b && b < c){
            printf("%d \n",a);
            printf("%d \n",b);
            printf("%d \n",c);
        }else if(a < c && c < b){
            printf("%d \n",a);
            printf("%d \n",c);
            printf("%d \n",b);
        }else if(b < a && a < c){
            printf("%d \n",b);
            printf("%d \n",a);
            printf("%d \n",c);
        }else if(b < c && c < a){
            printf("%d \n",b);
            printf("%d \n",c);
            printf("%d \n",a);
        }else if(c < a && a < b){
            printf("%d \n",c);
            printf("%d \n",a);
            printf("%d \n",b);
        }else if(c < b && b < a){
            printf("%d \n",c);
            printf("%d \n",b);
            printf("%d \n",a);
        }
    }
    
    return 0;

}