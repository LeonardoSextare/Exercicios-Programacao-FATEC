#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main()
{
    setlocale (LC_ALL,"");
    int ano,a,b,soma;

    printf("Digite o seu ano de nascimento e saiba seu perfil:\n");
    scanf("%d", &ano);

    a = ano/100;
    b = ano-(a*100);
    soma = (a+b)%5;

    if (soma == 0)
    {
        printf("Seu perfil �: Timido \n");
    }
    else if (soma == 1)
    {
        printf("Seu perfil �: Sonhador \n");
    }
    else if (soma == 2)
    {
        printf("Seu perfil �: Paquerador \n");
    }
    else if (soma == 3)
    {
        printf("Seu perfil �: Atraente \n");
    }
    else
    {
        printf("Seu perfil �: Irresistivel \n");
    }

    printf("\n\n");
    system("pause");
}
