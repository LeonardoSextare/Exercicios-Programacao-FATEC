#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main(){
    setlocale (LC_ALL,"");

    float valorProduto, desconto;

    printf ("Qual o valor do produto?\n");
    scanf ("%f", &valorProduto);

    printf ("O desconto ser� de quantos por cento?\n");
    scanf ("%f", &desconto);

    printf ("O valor a ser pago pelo produto ser� de: \n R$%.2f", valorProduto-(valorProduto*(desconto/100)));

    printf("\n\n");
    system("pause");
}
