#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    float peso, altura, imc;

    printf("Qual a sua altura?\n");
    scanf("%f", &altura);

    printf("Qual o seu peso?\n");
    scanf("%f", &peso);

    imc = peso/(altura*altura);
    printf("O valor de IMC é: %f\n", imc);

    system("pause");

}
