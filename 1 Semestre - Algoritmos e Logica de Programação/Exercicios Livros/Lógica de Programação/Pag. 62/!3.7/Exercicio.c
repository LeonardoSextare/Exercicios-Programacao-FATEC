#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{

    setlocale(LC_ALL, "");

    int numeros[20], contador = 0, menorNum, maiorNum;
    printf("Digite 20 numeros inteiros: \n");
    do
    {
        printf("Numero %d: ", contador+1);
        scanf("%d", &numeros[contador]);
        contador++;
    } while (contador <= 19);

    menorNum = numeros[0];
    maiorNum = numeros[0];

    for (int i = 0; i <= 19; i++)
    {
        if (menorNum > numeros[i])
            menorNum = numeros[i];

        if (maiorNum < numeros[i])
            maiorNum = numeros[i];
    }

    printf("O maior numero digitado é %d\n", maiorNum);
    printf("O menor numero digitado é %d\n", menorNum);


    printf("\n\n");
    system("pause");
}