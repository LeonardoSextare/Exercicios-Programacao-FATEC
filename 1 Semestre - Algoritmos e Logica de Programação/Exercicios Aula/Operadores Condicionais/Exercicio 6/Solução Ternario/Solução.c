#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{

    setlocale(LC_ALL,"");

    char escolha;

    printf("Informe seu estado civil:\ns - Solteiro\nc - casado\nd - Divorciado\nv - Viuvo\n");
    printf("Escolha uma opção(s, c, d, v): \n");
    scanf("%c", &escolha);

    escolha == 'c' || escolha == 'C'?
    printf("Casado"):
    escolha == 's' || escolha == 'S'?
    printf("Solteiro"):
    escolha == 'v' || escolha == 'V'?
    printf("Viuvo"):
    escolha == 'd' || escolha == 'D'?
    printf ("Divorciado"):
    printf("Opção Invalida");

}
