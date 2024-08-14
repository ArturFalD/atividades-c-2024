/*
Autor: Artur Falcão Dornelles

(1,0) Um lojista contratou você para desenvolver um programa que calcule o valor final de uma compra,
considerando possíveis descontos. Após pesquisar, você descobriu as seguintes informações sobre os
descontos que ele oferece:
• Os descontos são aplicados de acordo com a forma de pagamento escolhida:
o Pagamento à vista em dinheiro: 10% de desconto.
o Pagamento à vista no cartão de débito: 5% de desconto.
o Pagamento parcelado em até 3 vezes no cartão de crédito: sem desconto.
o Pagamento parcelado em 4 vezes ou mais no cartão de crédito: acréscimo de 5% sobre o
valor total.

Além disso, o lojista oferece um desconto especial para clientes frequentes:
• Se o cliente realizou mais de 10 compras no último ano, ele recebe um desconto adicional de
5%.
Desenvolva um programa em C que calcule o valor final da compra de um cliente. O programa deve
solicitar ao usuário os seguintes dados:
• Nome do cliente;
• Valor da compra;
• Forma de pagamento (1 para dinheiro, 2 para cartão de débito, 3 para cartão de crédito);
• Número de parcelas (se a forma de pagamento for cartão de crédito);
• Número de compras realizadas pelo cliente no último ano.

O programa deve calcular e apresentar ao usuário:
• O valor total da compra, considerando os descontos ou acréscimos aplicáveis;
• O valor de cada parcela (se aplicável);
• O percentual de desconto ou acréscimo aplicado.
*/

#include <stdio.h>

int main(){

    char nome;
    int valor,pagamento,parcelas,compras,desconto = 0;
    float calc;

    printf("Informe o nome do cliente: \n");
    scanf("%s", &nome);
    printf("Informe o valor da compra: \n");
    scanf("%d", &valor);
    printf("Informe o metodo de pagamento: \n (1) Dinheiro \n (2) Debito \n (3) Credito \n");
    scanf("%d", &pagamento);
    if (pagamento == 3){
        printf("Informe o numero de parcelas: \n");
        scanf("%d", &parcelas);
    }else{
        parcelas = 0;
    }
    printf("Informe o numero de compras no ultimo ano: \n");
    scanf("%d", &compras);

    if (pagamento == 1){
        calc = valor - (valor * 0.1);
        desconto += 10;
    }else if (pagamento == 2){
        calc = valor - (valor * 0.05);
        desconto += 5;
    }else if (pagamento == 3 && parcelas >= 4){
        calc = valor + (valor * 0.05);
    }

    if(compras > 10){
        calc = calc - (valor * 0.05);
        desconto += 5;
    }
    
    printf("Valor total da compra: %.2f \n",calc);
    if(parcelas > 0){
        printf("Valor de cada parcela: %.2f \n", calc / parcelas);
    }
    printf("Porcentagem de desconto dado ao cliente: %d porcento \n", desconto);
    
    return 0;
    
}