#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main()
{
    setlocale(LC_ALL,"");

    float a, b;
    char c;

    printf ("Insira dois numeros: \n");
    scanf ("%f %f", &a, &b);

    printf ("Escolha a opera��o matematica que deseja realizar: \n A - Soma\n B - Subtra��o\n C - Multiplica��o\n D - Divis�o \n");
    scanf (" %c", &c); // <<<<<<<<<<<<<<<<<<<

    if(c == 'a' || c == 'A')
    {
        printf ("%f + %f = %f", a,b,a+b);
    }
    else if(c == 'b' || c == 'B')
    {
        printf ("%f - %f = %f", a,b,a-b);
    }
    else if(c == 'c' || c == 'C')
    {
        printf ("%f X %f = %f", a,b,a*b);
    }
    else if(c == 'd' || c == 'D')
    {
        printf ("%f / %f = %f", a,b,a/b);
    }
    else
    {
        printf ("Selecione uma opera��o valida");
    }

    printf("\n\n");
    system("pause");
}
