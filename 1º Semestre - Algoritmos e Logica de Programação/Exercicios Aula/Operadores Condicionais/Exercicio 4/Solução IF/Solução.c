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

        if(carta == 1)
        {
            printf("Você pode dirigir o veiculo!");
        }
        else if (carta == 2)
        {
            printf("Você não pode dirigir o veiculo!");
        }
        else
        {
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
