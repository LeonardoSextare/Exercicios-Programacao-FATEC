#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    float salario;
    int tempo, idade;

    printf("Informe o salario: \n");
    scanf ("%f", &salario);

    printf("Informe o tempo de servi�o (em anos): \n");
    scanf ("%i", &tempo);

    printf("Informe a idade: \n");
    scanf ("%i", &idade);

    salario>=4000 && tempo>=3 && idade>=30?
    printf("Recebera reajuste")
    :printf("N�o receber� reajuste");


    printf("\n\n");
    system("pause");
}
