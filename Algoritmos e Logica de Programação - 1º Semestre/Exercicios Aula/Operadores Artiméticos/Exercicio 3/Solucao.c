#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    float valorProduto, quantidade, parcela;

    printf("Qual o valor do produto?\n");
    scanf("%f", &valorProduto);

    printf("Deseja pagar em quantas parcelas?\n");
    scanf("%f", &quantidade);

    parcela = valorProduto/quantidade;
    printf("O valor de cada parcela será de: R$%.2f\n", parcela);

    system("pause");

}
