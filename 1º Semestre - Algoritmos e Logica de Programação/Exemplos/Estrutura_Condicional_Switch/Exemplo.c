#include <stdio.h>

void main()
{
    char estadoCivil;
    printf("Digite [c] para casado (a) \n");
    printf("Digite [s] para solteiro (a) \n");
    printf("Digite [d] para divorciado (a) \n");
    printf("Digite [v] para viuvo (a) \n");
    printf("Qual e o seu estado civil: \n");
    scanf("%c", &estadoCivil);

    switch(estadoCivil)
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
        printf("\n Opcao Invalida \n");

    }

}
