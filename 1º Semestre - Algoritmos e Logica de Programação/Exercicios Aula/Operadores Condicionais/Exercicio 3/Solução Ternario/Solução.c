#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"");

    float valor;
    int escolha;

    printf("Informe o valor do produto:\n");
    scanf("%f", &valor);

    printf ("Forma de pagamento:\n1- A Vista\n2- A Prazo\nEscolha a forma de pagamento(1 ou 2): \n");
    scanf("%i", &escolha);

    escolha==1?
    printf("O total a pagar a vista é: R$%f", valor*0.9)
    :escolha==2?
    printf("O total a pagar a prazo é: R$%f", valor)
    :printf("Opçãoo Invalida");

}
