#include <stdio.h>
#include <locale.h>

void main(){
    setlocale (LC_ALL, "");
    float numero;

    printf ("Escreva um numero para exibir o dobro dele \n");
    scanf ("%f",&numero);

    printf ("O dobro do numero: %f é: %f ", numero, numero*2);

}
