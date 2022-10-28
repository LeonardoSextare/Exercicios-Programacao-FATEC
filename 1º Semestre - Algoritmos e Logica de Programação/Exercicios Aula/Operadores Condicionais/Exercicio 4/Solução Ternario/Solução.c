#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"");

    int idade, carta;

    printf("Qual sua idade?\n");
    scanf("%i", &idade);

    idade>=18?
    printf("Possui carta de habilitação?\n1- Sim\n2- Não\n")
    && scanf("%i", &carta)
    && carta==1?
    printf("Você pode dirigir o veiculo!"):
    carta==2?
    printf("Você não pode dirigir o veiculo!")
    :printf("Opção Invalida")
    :printf("Você não pode dirigir o veiculo!");

    printf("\n\n");
    system("pause");
}
