#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{

    setlocale(LC_ALL,"");

    float peso, altura, resultado;

    printf("Calculadora de IMC\n\n");
    printf("Informe seu peso em kg:\n");
    scanf("%f", &peso);
    printf("informe sua altura em cm\n");
    scanf("%f", &altura);

    altura = altura/100;
    resultado = peso/(altura*altura);

    printf("Seu IMC �: %.2f\n", resultado);


    resultado <= 18.5?
    printf("Voc� est� abaixo do peso!"):
    resultado > 18.5 && resultado <= 24.9?
    printf("Voc� est� com peso normal!"):
    resultado >= 25 && resultado <= 29.9?
    printf("Voc� est� com excesso de peso!"):
    resultado >= 30 && resultado <= 34.9?
    printf("Voc� est� classificado com obesidade classe 1!"):
    resultado >= 35 && resultado <= 39.9?
    printf("Voc� est� classificado com obesidade classe 2!"):
    printf("Voc� est� classificado com obesidade classe 3!");


    printf("\n\n");
    system("pause");
}
