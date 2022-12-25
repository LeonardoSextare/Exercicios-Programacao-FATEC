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

    printf("Seu IMC é: %.2f\n", resultado);


    resultado <= 18.5?
    printf("Você está abaixo do peso!"):
    resultado > 18.5 && resultado <= 24.9?
    printf("Você está com peso normal!"):
    resultado >= 25 && resultado <= 29.9?
    printf("Você está com excesso de peso!"):
    resultado >= 30 && resultado <= 34.9?
    printf("Você está classificado com obesidade classe 1!"):
    resultado >= 35 && resultado <= 39.9?
    printf("Você está classificado com obesidade classe 2!"):
    printf("Você está classificado com obesidade classe 3!");


    printf("\n\n");
    system("pause");
}
