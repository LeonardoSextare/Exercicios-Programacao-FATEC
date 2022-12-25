#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");
    
    float prestacao, juros;

    printf("Digite o valor da prestação em atraso: ");
    scanf("%f", &prestacao);

    juros = prestacao*0.1;

    printf("Valor final a pagar: R$ %g\n", (prestacao+juros)*0.9    );
    printf("Prejuizo do Comerciante: R$ %g", prestacao-((prestacao+juros)*0.9));

    printf("\n\n");
    system("pause");
}