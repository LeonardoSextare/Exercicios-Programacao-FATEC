#include <stdio.h>
#include <locale.h>

void main (){
    setlocale (LC_ALL,"");

    float salario, reajuste;

    printf ("Informe o valor do salario a ser reajustado: \n");
    scanf ("%f", &salario);

    printf ("Informe de 0 a 100 por cento, qual ser� o reajuste: \n");
    scanf ("%f", &reajuste);

    printf ("O salario reajustado ser� de %f", salario-(salario*(reajuste/100)));
}
