#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");

    long long int resultado = 1, numero;

    printf("Insira um número para calcular o fatorial dele:\n");
    scanf("%lld", &numero);

    if (numero == 0)
        numero = 1;

    for (; numero != 0; numero--)
    {
        resultado = numero * resultado;
    }

    printf("%lld\n", resultado);

    printf("\n\n");
    system("pause");
}