#include <stdio.h> //Standart Input Output - Biblioteca Para o printf, scanf e outros comandos de entrada e saida.
#include <stdlib.h> // Standart Library - Biblioteca para interagir com CMD do windows.

void main()
{
    float media, n1,n2,n3,n4; // Declarando variaveis do tipo float

    printf("Digite a nota 1: "); //Imprimindo na tela a mensagem para o usuario
    scanf("%f", &n1);            // Recebendo a entrada do usuario e armazenando na variavel 'n1'

    printf("Digite a nota 2: ");
    scanf("%f", &n2);

    printf("Digite a nota 3: ");
    scanf("%f", &n3);

    printf("Digite a nota 4: ");
    scanf("%f", &n4);

    media = (n1+n2+n3+n4)/4; // Atribuindo o resultado da expressão aritmética ao valor da varaivel 'media'

    if(media >= 6)   // Pegando o valor da variavel 'media' e comparando com 6.
    {
        printf("Sua media foi %.2f e voce esta aprovado \n", media); // Caso a condição relacional seja verdadeira irá executar o que estiver entre as chaves do 'if'
    }
    else if (media < 6 & media >= 3)     // Caso a condição anterior não seja verdadeira, irá testar novamente outra condição colocada entre "()"
    {
        printf("Sua media foi %.2f e voce esta de recuperacao \n", media); // Caso a condição relacional seja verdadeira irá executar o que estiver entre as chaves do 'else if'
    }
    else // caso nenhuma das condições seja atendida, irá realizar os comandos que estão dentro das chaves do 'else'
    {
        printf("Sua media foi %.2f e voce esta reprovado \n", media);
    }

    system("pause");
}

// na linha 26 note que utiliza-se operadores relacionais e logicos juntos.
