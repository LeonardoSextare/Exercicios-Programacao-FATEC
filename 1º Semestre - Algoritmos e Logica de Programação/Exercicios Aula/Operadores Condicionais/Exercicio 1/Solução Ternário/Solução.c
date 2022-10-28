#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


void main()
{
    setlocale(LC_ALL,"");

    int idade;

    printf("Digite sua idade: \n");
    scanf("%i", &idade);

    idade >= 18?printf("Você é maior de idade!"):printf("Você é menor de idade!");

    printf("\n\n");
    system("pause");
}
