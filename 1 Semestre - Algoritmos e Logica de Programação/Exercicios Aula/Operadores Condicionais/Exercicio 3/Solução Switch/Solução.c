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



    switch(escolha)
    {
        case 1:
        printf("O total a pagar a vista é: R$%.2f", valor*0.9);
        break;

        case 2:
        printf("O total a pagar a prazo é: R$%.2f", valor);
        break;

        default:
        printf("Opção invalida");
    }

    printf("\n\n");
    system("pause");
}
