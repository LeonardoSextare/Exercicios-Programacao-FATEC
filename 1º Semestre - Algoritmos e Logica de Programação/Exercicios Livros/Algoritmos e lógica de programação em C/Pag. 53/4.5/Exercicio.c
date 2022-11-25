#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main()
{
    setlocale (LC_ALL,"");

    char sexo;
    float altura;

    printf("=== Peso Ideal ===\n\n");

    printf("Qual sua altura em centimetros?\n");
    scanf("%f", &altura);
    altura = altura/100;

    printf("\nQual seu sexo?\nM - Masculino\nF - Feminino\n");
    scanf(" %c", &sexo);

    if (sexo == 'm' || sexo == 'M')
    {
        printf("O peso ideal para Homens de %.0fcm altura é: %.2f kg", altura*100,72.7*altura-58);
    }
    else if (sexo == 'f' || sexo == 'F')
    {
        printf("O peso ideal para Mulheres de %.0fcm altura é: %f kg", altura*100,62.1*altura-44.7);
    }
    else
    {
        printf("Opção Invalida");
    }

    printf("\n\n");
    system("pause");
}
