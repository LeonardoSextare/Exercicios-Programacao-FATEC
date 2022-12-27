#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");

    int idade;

    printf("Verificador de Classe Eleitoral\n");
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 16)
        printf("Não Votante");
    else if (idade >= 16 && idade <= 17 || idade >= 65)
        printf("Eleitor Facultativo");
    else if (idade >= 18 && idade <= 64)
        printf("Eleitor Obrigatorio");

    printf("\n\n");
    system("pause");
}