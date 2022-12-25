#include <stdio.h> //Standart Input Output - Biblioteca Para o printf, scanf e outros comandos de entrada e saida.
#include <stdlib.h> // Standart Library - Biblioteca para interagir com CMD do windows.

void main(){
    int n; // Declarando variavel do tipo inteiro

    printf("Digite um numero: "); //Imprimindo na tela a mensagem para o usuario
    scanf("%d", &n);              // Recebendo a entrada do usuario e armazenando na variavel 'n'



    if(n%2 == 0){                   // Pegando o valor da variavel n e divindo por 2 e compara o seu resultado ao numero 0
    printf("%d e par!\n", n);       // Caso a condição relacional seja verdadeiro irá executar o que estiver entre as chaves do 'if'
    } else {                        // Caso a condição não seja atendida, irá realizar os comandos que estão dentro das chaves do 'else'
    printf("%d e impar!\n", n);
    }

    system("pause");
}

// Com o comando '%' você recebe o resto da divisão diferente do comando '/' que pega o resultado da divisão, isso foi explicado
// Operadores aritméticos
