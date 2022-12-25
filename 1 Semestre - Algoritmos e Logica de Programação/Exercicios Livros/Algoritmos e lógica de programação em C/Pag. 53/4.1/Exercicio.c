#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main()
{
    setlocale(LC_ALL,"");

    char civil;


    printf("Informe seu estado civil\nS - Solteiro\nC - Casado\nD - Divorciado\nV - Viuvo\n");
    scanf("%c", &civil);

    if(civil == 's' || civil == 'S')
    {
        printf("O estado civil é: Solteiro");
    }
    else if(civil == 'c' || civil == 'C')
    {
        printf("O estado civil é: Casado");
    }
    else if(civil == 'd' || civil == 'D')
    {
        printf("O estado civil é: Divorciado");
    }
    else if(civil == 'v' || civil == 'V')
    {
        printf("O estado civil é: Viuvo");
    }

    printf("\n\n");
    system("pause");;
}
