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

    if (escolha == 1)
    {
        printf("O total a pagar a vista �: R$%f", valor*0.9);
    }
    else if(escolha == 2)
    {
        printf("O total a pagar a prazo �: R$%f", valor);
    }
    //O Programa ir� fechar caso uma op��o diferente for selecionada
    //A Solu��o para isso � fazer um 'else' para caso de uma op��o invalida ele exibir uma mensagem para o usuario
    else
    {
        printf("Op��o invalida");

    }
    printf("\n\n");
    system("pause");
}
