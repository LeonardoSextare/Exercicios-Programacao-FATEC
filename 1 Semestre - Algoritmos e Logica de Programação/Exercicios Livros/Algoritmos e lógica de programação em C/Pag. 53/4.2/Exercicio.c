#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main()
{
    setlocale (LC_ALL,"");

    int num;
    printf ("Selecione a op��o desejada:\n1- Saldo\n2- Extrato\n3- Saque\n4- Sair\n");
    scanf ("%i", &num);

    if (num == 1)
    {
        printf ("Voc� selecionou: Saldo");
    }
    else if (num == 2)
    {
        printf ("Voc� selecionou: Extrato");
    }
    else if (num == 3)
    {
        printf ("Voc� selecionou: Saque");
    }
    else if (num == 4)
    {
        printf ("Voc� selecionou: Sair");
    }
    else
    {
        printf ("Op��o Inv�lida");
    }

    printf("\n\n");
    system("pause");
}
