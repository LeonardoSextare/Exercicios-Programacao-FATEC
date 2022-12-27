#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");

    int dia, mes, ano;
    
        printf("Verificador de Data Valida\n");
        printf("Digite o dia: ");
        scanf("%d", &dia);

        printf("Digite o mes: ");
        scanf("%d", &mes);

        printf("Digite o ano: ");
        scanf("%d", &ano);

        if (dia > 31 || dia < 1 || mes > 12 || mes < 1 || ano < 0)
            printf("Data Invalida!");
        else if (((ano % 4) == 0 && mes == 2 && dia > 29) || ((ano % 4) != 0 && mes == 2 && dia > 28))
            printf("Data Invalida!");

        else if (((mes % 2) == 0 && mes <= 7 && dia > 30) || ((mes % 2) != 0 && mes >= 8 && dia > 30))
            printf("Data Invalida!");
        else
            printf("Data Valida!");

        printf("\n\n");
        system("pause");
}