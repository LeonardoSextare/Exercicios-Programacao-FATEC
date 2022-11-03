#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main(){
    setlocale (LC_ALL, "");
    float numero;

    printf ("Escreva um numero para exibir o dobro dele \n");
    scanf ("%f",&numero);

    printf ("O dobro do numero: %.2f é: %.2f ", numero, numero*2);

    printf("\n\n");
    system("pause");
}
