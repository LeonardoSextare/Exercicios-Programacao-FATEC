#include <stdio.h> // Standart Input Output - Biblioteca Para o printf, scanf e etc.
#include <stdlib.h> // Standart Library - Biblioteca para interagir com CMD do windows.
#include <locale.h> // Biblioteca para exibir acentos e simbolos que não existem no inglês

void main() // Todo codigo inicia com a função main
{
    setlocale(LC_ALL,""); //Definindo configuraçoes para exibição de acentos e simbolos

    char sexo; // Definindo variavel do tipo char, aceita somente UM caractere
    char nome[50]; // Definindo variavel do tipo char em cadeia, dessa forma pode aceitar varios caracteres

    printf("Digite seu nome: "); // Mostra na tela o que foi digitado entre parentes
    gets(nome); // Função parecida com o scanf porém ele captura espaços digitados pelo usuario

    printf("Digite seu sexo: ");
    scanf ("%c", &sexo); // Armazena o valor digitado na variavel sexo

    printf ("\n O nome digitado foi %s e sexo %c \n", nome, sexo); // \n pula um paragrafo

    system("pause");
}
