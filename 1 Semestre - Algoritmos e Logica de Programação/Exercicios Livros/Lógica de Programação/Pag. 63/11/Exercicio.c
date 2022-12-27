#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define paises 3
char pais[paises][100];

void main()
{
    setlocale(LC_ALL, "");

    int nPais = 0, ouro[paises], prata[paises], bronze[paises];
    float resultado[paises];
    
    do
    {   
        printf("===Classificacao Olimpiadas=== \n\n");

        printf("Informe o nome do %d. Pais: ", nPais + 1);
        scanf("%s", &pais[nPais]);

        printf("Medalhas de Ouro de: %s:\n", pais[nPais]);
        scanf("%d", &ouro[nPais]);

        printf("Medalhas de Prata de: %s:\n", pais[nPais]);
        scanf("%d", &prata[nPais]);

        printf("Medalhas de Bronze de: %s:\n", pais[nPais]);
        scanf("%d", &bronze[nPais]);

        system("cls");
        nPais++;
    } while (nPais < paises);

    for (int i = 0; i <paises; i++)
        resultado[i] = ((ouro[i] * 3) + (prata[i] * 2) + (bronze[i] * 1)) / (3 + 2 + 1);

    organizador(resultado, paises);

    printf("===Classificacao Geral===\n\n");
    for (int i = 0; i < paises; i++)
        printf("%d Lugar: %s Ouro: %d  Prata: %d Bronze: %d\n", paises-i, pais[i], ouro[i],prata[i],bronze[i]);

    printf("\n\n");
    system("pause");
}

void organizador(float vetor[], int tamanho)
{
    int i, y, aux;
    char auxC[100];

    for (i = 0; i < tamanho; i++)
    {
        for (y = 0; y < tamanho - 1 - i; y++)
        {
            if (vetor[y] > vetor[y + 1])
            {
                aux = vetor[y];
                 vetor[y] = vetor[y + 1];
                vetor[y + 1] = aux;

                strcpy(auxC, pais[y]);
                strcpy(pais[y], pais[y + 1]);
                strcpy(pais[y + 1], auxC);
            }
        }
    }
}