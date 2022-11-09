#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"");

    int idade, carta;

    printf("Qual sua idade?\n");
    scanf("%i", &idade);

    if  (idade >=18)
    {
        printf("Possui carta de habilitação?\n1- Sim\n2- Não\n");
        scanf("%i", &carta);

        switch (carta)
        {
        case 1:
            printf("Você pode dirigir o veiculo!");
            break;

        case 2:
            printf("Você não pode dirigir o veiculo!");
            break;

        default:
            printf("Opção invalida!");
        }
    }
    else
    {
        printf("Você não pode dirigir o veiculo!");
    }


    printf("\n\n");
    system("pause");
}
