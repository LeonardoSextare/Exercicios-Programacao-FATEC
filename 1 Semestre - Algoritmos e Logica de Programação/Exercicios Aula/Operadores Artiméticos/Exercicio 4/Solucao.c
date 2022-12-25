#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    float distancia, litros, consumo;

    printf("Qual a distancia percorrida?\n");
    scanf("%f", &distancia);

    printf("Quantos litros foram gastos?\n");
    scanf("%f", &litros);

    consumo = distancia/litros;
    printf("O consumo médio do veiculo foi de: %.2df km/l\n", consumo);

    system("pause");

}
