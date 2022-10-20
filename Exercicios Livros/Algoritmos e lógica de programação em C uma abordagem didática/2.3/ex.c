#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    float altura, peso;

    printf("Informe sua altura em metros (ex: 1,70)");
    scanf ("%f", &altura);

    printf("Informe seu peso em KG");
    scanf ("%f", &peso);

    printf("Seu indice IMC é %f", peso/(altura*altura));

}
