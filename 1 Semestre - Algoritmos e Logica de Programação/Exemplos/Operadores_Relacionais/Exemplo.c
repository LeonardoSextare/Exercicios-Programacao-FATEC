#include <stdio.h> // Standart Input Output - Biblioteca Para o printf, scanf e etc.
#include <stdlib.h> // Standart Library - Biblioteca para interagir com CMD do windows.
#include <locale.h> // Biblioteca para exibir acentos e simbolos que não existem no inglês


void main() // Todo codigo inicia com a função main
{
    setlocale(LC_ALL,""); //Definindo configuraçoes para exibição de acentos e simbolos

    int numero1, numero2, resultado1, resultado2, resultado3, resultado4, resultado5, resultado6; // Definindo variaveis do tipo float

    printf("Digite um número: \n");
    scanf("%i", &numero1);

    printf("Digite outro número: \n");
    scanf("%i", &numero2);

    resultado1 = numero1 < numero2; // Realizo a operação aritmética com os valores de duas variveis e armazeno o resultado na varivel resultado1
    printf("%i menor que %i = %i \n",numero1,numero2,resultado1); // Mostro na tela o resultado com o texto já formatado

    resultado2 = numero1 > numero2;
    printf("%i maior que %i = %i \n",numero1,numero2,resultado2);

    resultado3 = numero1 <= numero2;
    printf("%i menor igual a %i = %i \n",numero1,numero2,resultado3);

    resultado4 = numero1 >= numero2;
    printf("%i maior igual a %i = %i \n",numero1,numero2,resultado4);

    resultado5 = numero1 == numero2;
    printf("%i é igual %i = %i \n",numero1,numero2,resultado5);

    resultado6 = numero1 != numero2;
    printf("%i diferente de %i = %i\n",numero1,numero2,resultado6);

    system("pause");
}
