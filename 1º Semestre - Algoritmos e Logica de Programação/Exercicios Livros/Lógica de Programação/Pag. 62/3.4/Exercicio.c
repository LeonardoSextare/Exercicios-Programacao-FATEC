#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");

    int numN;
    float numH, resultado = 1;

    printf("H = 1 + 1/1 + 1/2... 1/N \n");
    printf("Digite o valor de N para delimitar a expressão:\n");
    scanf("%i", &numN);

    for (; numN != 0; numN--)
    {
        numH = 1.0 / numN;
        resultado += numH;
    }

    printf("%f ", resultado);
    
    printf("\n\n");
    system("pause");
}