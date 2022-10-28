#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale (LC_ALL,"");

    int cadeira;

    printf("Quantas cadeiras você irá comprar?\n");
    scanf("%i", &cadeira);

    cadeira > 50 ? printf("O valor total a pagar é R$%i ", cadeira*40) : printf("O valor total a pagar é R$%i", cadeira*55);

    printf("\n\n");
    system("pause");
}
