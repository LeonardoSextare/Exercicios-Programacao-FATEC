#include <stdio.h>
#include <locale.h>
#include <string.h>

void main() {
    setlocale (LC_ALL,"");
    char ano[] = "0000";
    int a, b, c;

    printf("Digite o seu ano de nascimento e saiba seu perfil:\n");
    gets(ano);

 printf (" %s",ano);

    a = atoi(ano[1]);
    b = 1;

    printf ("a= %i b= %c ano = %i", a,b,ano);

    /*if ( (a+b)%5 == 0 ) {
        printf("Seu perfil é: Timido \n");
    } else if ( (a+87)%5 == 1 ) {
        printf("Seu perfil é: Sonhador \n");
    } else if ( (a+87)%5 == 2 ) {
        printf("Seu perfil é: Paquerador \n");
    } else if ( (a+87)%5 == 3 ) {
        printf("Seu perfil é: Atraente \n");
    } else if ( (a+87)%5 == 4 ) {
        printf("Seu perfil é: Irresistivel \n");
    }*/
}
