#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{

    setlocale(LC_ALL, "");

    int i = 0, num[5];
    float media = 0;

    printf("Média Ponderada\n\nDigite 5 Numeros inteiros\nPesos 1,2,3,4 e 5 Respectivamente\n");
    for (int x = 0; x < 4; x++)
    {
        num[x] = 0;
    }

    do
    {
        printf("Numero %d:", i + 1);
        //num[i] = i + 1;
        scanf("%d", &num[i]);
        media += num[i] * (i + 1);
        i++;
    } while (i <= 4);

    media = media / (1 + 2 + 3 + 4 + 5);
    printf("Média Ponderada\n%f", media);
    printf("\n\n");
    system("pause");
}