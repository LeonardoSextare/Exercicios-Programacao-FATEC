#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{

    setlocale(LC_ALL, "");

    int num = 0, unidade, dezena, centena;
    do
    {
        printf("Digite um numero entre 100 e 999:\n");
        scanf("%d", &num);
        if (num > 999 || num < 100)
        {
            printf("Por favor insira um numero entre 0 e 999\n");
        }

    } while (num > 999 || num < 100);

    unidade = num % 10;
    dezena = ((num - unidade)/10)%10;
    centena = num/100;

    printf("Unidade: %d Dezena %d Centena %d\n",unidade, dezena, centena);
    printf("Numero Invetido: %d%d%d\n", unidade, dezena, centena);

    printf("\n\n");
    system("pause");
}