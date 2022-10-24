#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main(){
    setlocale(LC_ALL,"");

    int numero1, numero2;
    printf("Digite um número:\n");
    scanf("%i", &numero1);

    printf("Digite outro número: \n");
    scanf("%i", &numero2);

    printf("\n%i > %i e %i == %i resultado é: %i\n", numero1, numero2, numero1, numero2, numero1 > numero2 && numero1 == numero2);

    printf("%i <= %i ou %i != %i resultado é: %i\n", numero1, numero2, numero1, numero2, numero1 <= numero2 || numero1 != numero2);

    printf("não (%i < %i) resultado é: %i\n",numero1,numero2, !numero1 < numero2);

    system("pause");

}
