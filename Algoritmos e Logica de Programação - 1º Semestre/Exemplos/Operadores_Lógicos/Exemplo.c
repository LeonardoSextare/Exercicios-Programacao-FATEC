#include <stdio.h> // Standart Input Output - Biblioteca Para o printf, scanf e etc.
#include <stdlib.h> // Standart Library - Biblioteca para interagir com CMD do windows.
#include <locale.h> // Biblioteca responsavel por exibir acentos e simbolos que n�o existem em ingl�s
#include <stdbool.h> // Biblioteca para utilizar logica boleana

void main() // Todo codigo inicia com a fun��o main
{
    setlocale(LC_ALL,""); //Define as configura��es de exibi��o da biblioteca locale.h

    printf("Operador E (&&)\n");

    printf("V e V = %d\n", true && true); // Mostro na tela o resultado da logica boleana.
    printf("V e F = %d\n", true && false);
    printf("F e V = %d\n", false && true);
    printf("F e F = %d\n", false && false);

    printf("\nOperador Ou (||)\n");

    printf("V ou V = %d\n", true || true);
    printf("V ou F = %d\n", true || false);
    printf("F ou V = %d\n", false || true);
    printf("F ou F = %d\n", false || false);

    printf("\nOperador N�O (!)\n");

    printf("N�o V = %d\n", !true);
    printf("N�o F = %d\n", !false);

    //B�nus operador OU Exclusivo/XOR
    printf ("\nOperador XOR (^)\n");

    printf("V XOR V = %d\n", true^true);
    printf("V XOR F = %d\n", true^false);
    printf("F XOR V = %d\n", false^true);
    printf("F XOR F = %d\n", false^false);

    system("pause");
}
