#include <stdio.h> // Standart Input Output - Biblioteca Para o printf, scanf e etc.
#include <stdlib.h> // Standart Library - Biblioteca para interagir com CMD do windows.
#include <locale.h> // Biblioteca para exibir acentos e simbolos que n�o existem no ingl�s
#include <stdbool.h> //Biblioteca para utilizar logica boleanas

void main() // Todo codigo inicia com a fun��o main
{
    setlocale(LC_ALL,""); //Definindo configura�oes para exibi��o de acentos e simbolos

    bool v, f; // Definindo variavel do tipo bool, aceita 0 ou 1

    v = true; // Definindo a variavel 'v' para True/Verdadeiro
    f = false; // Definindo a variavel 'f' para False/Falso

    printf("O melhor time do Brasil � o Corinthians? %d\n", f); // Mostra na tela o que foi digitado entre parentes
    printf("2 + 2 = 4? %d \n", v);

    system("pause");
}
