#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main() {
    setlocale (LC_ALL,"");

    float distancia, combustivel;

    printf ("Informe a distancia percorrida em KM: \n");
    scanf ("%f", &distancia);

    printf("Informe a Quantidade de combustivel gasta em litros: \n");
    scanf ("%f", &combustivel);

    printf ("O seu veiculo consumiu em média: %.2f Litros por KM", distancia/combustivel);

    printf("\n\n");
    system("pause");
}
