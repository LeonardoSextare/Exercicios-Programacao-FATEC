#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define PI 3.141592653589793238462643383279502884197

void main()
{

    setlocale(LC_ALL, "");
    float raio;

    printf("Informe o Raio do circulo para saber sua área: \n");
    scanf("%f", &raio);

    printf ("A area do circulo é: \n %f", PI*(raio*raio));

    printf("\n\n");
    system("pause");
}