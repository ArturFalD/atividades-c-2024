#include <stdio.h>

int main(){

    int sexo,contF = 0;
    float altura,maiorA = 0,menorA = 0,mediaF = 0,media = 0;

    for(int i = 0;i <= 9; i++){
        printf("Digite o sexo: 1 => M; 2 => F;\n");
        scanf("%d",&sexo);
        printf("Digite a altura: (Em metros)\n");
        scanf("%f",&altura);

        if(altura > maiorA){
            maiorA = altura;
        }
        if (altura < menorA || menorA == 0){
            menorA = altura;
        }
        
        if(sexo == 2){
            mediaF += altura;
            contF += 1;
        }
        
        media += altura;

    }

    printf("Menor altura do grupo: %.2f\nMaior altura do grupo: %.2f\nMedia das alturas das mulheres: %.2f\nMedia das alturas: %.2f",menorA,maiorA,mediaF/contF,media/10);

    return 0;
}