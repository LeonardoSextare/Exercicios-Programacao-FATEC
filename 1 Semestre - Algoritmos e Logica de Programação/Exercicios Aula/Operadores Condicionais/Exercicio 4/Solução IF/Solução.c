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
        printf("Possui carta de habilita��o?\n1- Sim\n2- N�o\n");
        scanf("%i", &carta);

        if(carta == 1)
        {
            printf("Voc� pode dirigir o veiculo!");
        }
        else if (carta == 2)
        {
            printf("Voc� n�o pode dirigir o veiculo!");
        }
        else
        {
            printf("Op��o invalida!");
        }
    }
    else
    {
        printf("Voc� n�o pode dirigir o veiculo!");
    }
    printf("\n\n");
    system("pause");
}
