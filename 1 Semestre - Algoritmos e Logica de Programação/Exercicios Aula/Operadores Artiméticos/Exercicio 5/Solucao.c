#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    float salarioMinimo, vendas;
    char vendedor[100];
    printf("Digite o nome do vendedor:\n");
    gets(vendedor);

    printf("Informe o Salario Minimo:\n");
    scanf("%f", &salarioMinimo);

    printf("Informe quantas vendas foram efetuadas: \n");
    scanf("%f", &vendas);

    printf("O Vendedor: %s ir� receber no final do m�s o salario de: R$%.2f\n", vendedor, salarioMinimo+(vendas*0.15));
    system("pause");

}
