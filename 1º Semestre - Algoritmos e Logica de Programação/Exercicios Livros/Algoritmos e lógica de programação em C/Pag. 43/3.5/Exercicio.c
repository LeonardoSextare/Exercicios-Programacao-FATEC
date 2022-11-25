#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main()
{
    setlocale (LC_ALL,"");
    float a, b, c;

    printf("=== Reorganizador de Números ==\n\n");
    printf ("Digite 3 números aleatorios: \n");
    scanf ("%f %f %f", &a, &b, &c);

    if (a < b && b < c)
    {
        printf("%.2f %.2f %.2f", a,b,c);
    }
    else if (a < c && c < b)
    {
        printf("%.2f %.2f %.2f", a,c,b);
    }
    else if(b < a && a < c)
    {
        printf("%.2f %.2f %.2f", b,a,c);
    }
    else if(b < c && c < a)
    {
        printf("%.2f %.2f %.2f", b,c,a);
    }
    else if (c < a && a < b)
    {
        printf("%.2f %.2f %.2f", c,a,b);
    }
    else
    {
        printf("%.2f %.2f %.2f", c,b,a);
    }

    printf("\n\n");
    system("pause");
}
