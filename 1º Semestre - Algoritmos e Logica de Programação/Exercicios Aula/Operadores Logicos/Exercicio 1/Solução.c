#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main(){
    setlocale(LC_ALL,"");

    int numero1, numero2;
    printf("Digite um n�mero:\n");
    scanf("%i", &numero1);

    printf("Digite outro n�mero: \n");
    scanf("%i", &numero2);

    printf("\n%i > %i e %i == %i resultado �: %i\n", numero1, numero2, numero1, numero2, numero1 > numero2 && numero1 == numero2);

    printf("%i <= %i ou %i != %i resultado �: %i\n", numero1, numero2, numero1, numero2, numero1 <= numero2 || numero1 != numero2);

    printf("n�o (%i < %i) resultado �: %i\n",numero1,numero2, !numero1 < numero2);

    system("pause");

}
