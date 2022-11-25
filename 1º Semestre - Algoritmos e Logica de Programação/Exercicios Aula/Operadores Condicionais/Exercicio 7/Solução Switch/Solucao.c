#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");

    int escolha, recheio;

    printf("Escolha o sabor da pizza:\n[1] - Pizza de Queijo\n[2] - Pizza de Carne\n[3] - Pizza de Calabresa\n[4] - Pizza de Frango\n");
    printf("Escolha uma opção(1, 2, 3, 4): \n");
    scanf("%d", &escolha);

    switch (escolha)
    {

    case 1:
        printf("A pizza escolhida é de: Queijo com Chocolate\n");
        break;

    case 2:
        printf("A pizza escolhida é de: Carne com Cheddar\n");
        break;

    case 3:
        printf("A pizza escolhida é de: Calabresa com Catupiry\n");
        break;

    case 4:
        printf("A pizza escolhida é de: Frango com Palmito\n");
        break;

    default:
        printf("Opção Invalida \n");
    }

    printf("\n\n");
    system("pause");
}
