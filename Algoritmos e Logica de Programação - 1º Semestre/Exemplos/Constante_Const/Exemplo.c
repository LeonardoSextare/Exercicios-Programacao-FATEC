#include <stdio.h> // Standart Input Output - Biblioteca Para o printf, scanf e etc.
#include <stdlib.h> // Standart Library - Biblioteca para interagir com CMD do windows.
#include <locale.h> // Biblioteca para exibir acentos e simbolos que n�o existem no ingl�s




void main() // Todo codigo inicia com a fun��o main
{
    setlocale(LC_ALL,""); //Definindo configura�oes para exibi��o de acentos e simbolos

    double comprimento, raio; // Definindo variavel do tipo double (� parecido com a float por�m aceita numeros maiores)

    const double PI = 3.14159; // O comando const tranforma uma variavel existente em constante


    raio = 5;
    comprimento = 2 * PI * raio; // Foi utilizado a constante Pi para realizar os calculos


    printf("O comprimento da circunferencia �: %f \n", comprimento); //Mostra na tela o que foi digitado entre parentes

    system("pause");
}
