#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main(){
    setlocale(LC_ALL,"");

    float altura, peso;

    printf("Informe sua altura em metros(ex: 1,70):\n");
    scanf ("%f", &altura);

    printf("Informe seu peso em KG:\n");
    scanf ("%f", &peso);

    printf("Seu indice IMC é %.2f", peso/(altura*altura));

    printf("\n\n");
    system("pause");
}
