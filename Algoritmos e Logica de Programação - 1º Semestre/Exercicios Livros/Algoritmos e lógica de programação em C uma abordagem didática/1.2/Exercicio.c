#include <stdio.h>
#include <locale.h>

void main(){
    setlocale (LC_ALL,"");
    float vendas;
    printf ("Informa o valor total de produtos vendidos:\n");
    scanf ("%f", &vendas);

    printf ("A Comissão do vendedor será de: %f", vendas*0.1);


}
