#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main(){
    setlocale(LC_ALL,"");

    float real, dolar = 5.30;

    printf ("== Cota��o do Dolar Atual: %.2f ==\n\n", dolar);
    printf ("Informe o valor em Reais(R$) a ser convertido para Dolar(US$):\n");
    scanf ("%f", &real);

    printf ("R$%.2f convertidos em Dolar � US$%.2f", real, real*dolar);

    printf("\n\n");
    system("pause");
}
