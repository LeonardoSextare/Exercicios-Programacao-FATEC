#include <stdio.h> // Standart Input Output - Biblioteca Para o printf, scanf e etc.
#include <stdlib.h> // Standart Library - Biblioteca para interagir com CMD do windows.
#include <locale.h> // Biblioteca para exibir acentos e simbolos que n�o existem no ingl�s

void main() // Todo codigo inicia com a fun��o main
{
    setlocale(LC_ALL,""); //Definindo configura�oes para exibi��o de acentos e simbolos

    float num; // Definindo variavel do tipo real, ou seja, pode aceitar numeros com virgula


    printf ("Digite um n�mero: "); // Mostro na tela o que foi digitado entre aspas

    scanf ("%f", &num); // Pe�o ao usuario para digitar um valor e armazeno ele na variavel num.
    printf ("O numero digitado foi %.2f \n", num); // Mostro na tela o que est� armazenado na varivel num

    system("pause"); //Comando de pausa no CMD
}
