#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main()
{
    setlocale(LC_ALL,"");

    int idade;

    printf("Informe a idade do nadador: \n");
    scanf("%i", &idade);

    if (idade <=10)
    {
        printf("O nadador irá participar da categoria: Infantil ");
    }
    else if (idade > 10 && idade <17)
    {
        printf("O nadador irá participar da categoria: Juvenil");
    }
    else
    {
        printf("O nadador irá participar da categoria: Senior ");
    }

    printf("\n\n");
    system("pause");
}
