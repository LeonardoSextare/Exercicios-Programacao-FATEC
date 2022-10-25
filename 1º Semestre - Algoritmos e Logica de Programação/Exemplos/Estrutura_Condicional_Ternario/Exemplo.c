#include <stdio.h> //Standart Input Output - Biblioteca Para o printf, scanf e outros comandos de entrada e saida.
#include <stdlib.h> // Standart Library - Biblioteca para interagir com CMD do windows.

void main()
{
    float salario, resultado; // Declarando variaveis do tipo float

    printf("Digite o salario: "); //Imprimindo na tela a mensagem para o usuario
    scanf("%f", &salario);            // Recebendo a entrada do usuario e armazenando na variavel 'salario'

    //          se salario>1000; então salario + 10%; senao salario +5%
    resultado = salario > 1000?salario + (salario *0.10): salario + (salario * 0.05);

    printf("O novo salario será de: %.2f \n", resultado);

    system("pause");
}
