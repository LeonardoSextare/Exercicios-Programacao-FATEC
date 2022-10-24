#include <stdio.h> // Standart Input Output - Biblioteca Para o printf, scanf e etc.
#include <stdlib.h> // Standart Library - Biblioteca para interagir com CMD do windows.
#include <locale.h> // Biblioteca para exibir acentos e simbolos que não existem no inglês




void main() // Todo codigo inicia com a função main
{
    setlocale(LC_ALL,""); //Definindo configuraçoes para exibição de acentos e simbolos

    double comprimento, raio; // Definindo variavel do tipo double (é parecido com a float porém aceita numeros maiores)

    const double PI = 3.14159; // O comando const tranforma uma variavel existente em constante


    raio = 5;
    comprimento = 2 * PI * raio; // Foi utilizado a constante Pi para realizar os calculos


    printf("O comprimento da circunferencia é: %f \n", comprimento); //Mostra na tela o que foi digitado entre parentes

    system("pause");
}
