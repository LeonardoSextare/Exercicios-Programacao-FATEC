#include <stdio.h> // Standart Input Output - Biblioteca Para o printf, scanf e etc.
#include <stdlib.h> // Standart Library - Biblioteca para interagir com CMD do windows.
#include <locale.h> // Biblioteca para exibir acentos e simbolos que não existem no inglês

void main() // Todo codigo inicia com a função main
{
    setlocale(LC_ALL,""); //Definindo configuraçoes para exibição de acentos e simbolos

    float num; // Definindo variavel do tipo real, ou seja, pode aceitar numeros com virgula


    printf ("Digite um número: "); // Mostro na tela o que foi digitado entre aspas

    scanf ("%f", &num); // Peço ao usuario para digitar um valor e armazeno ele na variavel num.
    printf ("O numero digitado foi %.2f \n", num); // Mostro na tela o que está armazenado na varivel num

    system("pause"); //Comando de pausa no CMD
}
