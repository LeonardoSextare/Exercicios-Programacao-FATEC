#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main(){
    setlocale (LC_ALL,"");
    float vendas;
    printf ("Informa o valor total de produtos vendidos:\n");
    scanf ("%f", &vendas);

    printf ("A Comiss?o do vendedor ser? de: %f", vendas*0.1);

    printf("\n\n");
    system("pause");
}
