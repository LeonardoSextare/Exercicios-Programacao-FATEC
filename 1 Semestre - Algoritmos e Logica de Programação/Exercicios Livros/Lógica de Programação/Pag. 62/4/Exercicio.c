#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");

    float tanque, abastecimento, km, resultado, autonomia;

    printf("Calculadora de Consumo de Combustivel\n");
    printf("Informe a capacidade do tanque de combustivel do seu carro em litros:\n");
    scanf("%f", &tanque);

    printf("Informe a quantidade de combustivel do ultimo abastecimento em litros:\n");
    scanf("%f", &abastecimento);

    printf("Informe a quantidade de Km's percorridos desde o ultimo abastecimento:\n");
    scanf("%f", &km);

    resultado = km/abastecimento;
    autonomia = (tanque - abastecimento)*resultado;

    printf("Consumo médio do Veiculo: %g Km p/ Litro \n", resultado);
    printf("Autonomia Restante: %g km's", autonomia);

    printf("\n\n");
    system("pause");
}