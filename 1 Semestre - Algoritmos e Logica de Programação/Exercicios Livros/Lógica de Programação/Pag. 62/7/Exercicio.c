#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");

    int mes;

    printf("Digite o numero de um mês para saber seu nome: ");
    scanf("%d", &mes);

    switch (mes)
    {
    case 1:
        printf("Mês: Janeiro");
        break;
    case 2:
        printf("Mês: Fevereiro");
        break;
    case 3:
        printf("Mês: Março");
        break;
    case 4:
        printf("Mês: Abril");
        break;
    case 5:
        printf("Mês: Maio");
        break;
    case 6:
        printf("Mês: Junho");
        break;
    case 7:
        printf("Mês: Julho");
        break;
    case 8:
        printf("Mês: Agosto");
        break;
    case 9:
        printf("Mês: Setembro");
        break;
    case 10:
        printf("Mês: Outubro");
        break;
    case 11:
        printf("Mês: Novembro");
        break;
    case 12:
        printf("Mês: Dezembro");
        break;
    default:
        printf("Mês Invalido");
        break;
    }

    printf("\n\n");
    system("pause");
}