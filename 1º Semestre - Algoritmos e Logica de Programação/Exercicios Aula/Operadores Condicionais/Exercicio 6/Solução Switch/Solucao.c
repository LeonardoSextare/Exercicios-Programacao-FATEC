#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"");

    char escolha;

    printf("Informe seu estado civil:\ns - Solteiro\nc - Casado\nd - Divorciado\nv - Viuvo\n");
    printf("Escolha uma op��o(s, c, d, v): \n");
    scanf("%c", &escolha);

    switch (escolha)
    {

    case 'c':
    case 'C':
        printf("\n O estado civil selecionado e casado(a) \n");
        break;

    case 's':
    case 'S':
        printf("\n O estado civil selecionado e solteiro(a) \n");
        break;

    case 'd':
    case 'D':
        printf("\n O estado civil selecionado e divorciado(a) \n");
        break;

    case 'v':
    case 'V':
        printf("\n O estado civil selecionado e viuvo(a) \n");
        break;

    default:
        printf("\n Op��o Invalida \n");

    }
    printf("\n\n");
    system("pause");
}
