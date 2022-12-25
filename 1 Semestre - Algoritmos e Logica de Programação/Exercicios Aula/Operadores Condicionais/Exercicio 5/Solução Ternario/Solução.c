#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    float salario;
    int tempo, idade;

    printf("Informe o salario: \n");
    scanf ("%f", &salario);

    printf("Informe o tempo de serviço (em anos): \n");
    scanf ("%i", &tempo);

    printf("Informe a idade: \n");
    scanf ("%i", &idade);

    salario>=4000 && tempo>=3 && idade>=30?
    printf("Recebera reajuste")
    :printf("Não receberá reajuste");


    printf("\n\n");
    system("pause");
}
