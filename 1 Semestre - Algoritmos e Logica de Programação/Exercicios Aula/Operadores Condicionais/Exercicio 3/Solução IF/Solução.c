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
        printf("O total a pagar a vista é: R$%f", valor*0.9);
    }
    else if(escolha == 2)
    {
        printf("O total a pagar a prazo é: R$%f", valor);
    }
    //O Programa irá fechar caso uma opção diferente for selecionada
    //A Solução para isso é fazer um 'else' para caso de uma opção invalida ele exibir uma mensagem para o usuario
    else
    {
        printf("Opção invalida");

    }
    printf("\n\n");
    system("pause");
}
