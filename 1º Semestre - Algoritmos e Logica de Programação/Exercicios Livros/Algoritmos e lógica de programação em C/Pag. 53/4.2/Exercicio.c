#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main()
{
    setlocale (LC_ALL,"");

    int num;
    printf ("Selecione a opção desejada:\n1- Saldo\n2- Extrato\n3- Saque\n4- Sair\n");
    scanf ("%i", &num);

    if (num == 1)
    {
        printf ("Você selecionou: Saldo");
    }
    else if (num == 2)
    {
        printf ("Você selecionou: Extrato");
    }
    else if (num == 3)
    {
        printf ("Você selecionou: Saque");
    }
    else if (num == 4)
    {
        printf ("Você selecionou: Sair");
    }
    else
    {
        printf ("Opção Inválida");
    }

    printf("\n\n");
    system("pause");
}
