#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main()
{
    setlocale(LC_ALL,"");

    int produzidas, defeituosas;
    float defeituosasPorCento;

    printf("Informe o numero de pe�as produzidas: \n");
    scanf("%i", &produzidas);

    printf ("Informe o numero de pe�as defeituosas\n");
    scanf("%i",&defeituosas);

    defeituosasPorCento = (10*produzidas)/100;

    if(defeituosas >= defeituosasPorCento)
    {
        printf("A maquina precisa de manuten��o!");
    }
    else
    {
        printf("A maquina n�o precisa de manuten��o!");
    }

    printf("\n\n");
    system("pause");
}
