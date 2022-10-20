#include <stdio.h>
#include <locale.h>
#include <math.h>

void main(){
    setlocale(LC_ALL,"");

    float capital, juros, meses, valorFinal;

    printf ("Informe o capital a ser investido: \n");
    scanf ("%f", &capital);

    printf ("Informe o juros mensal do investimento: \n");
    scanf ("%f", &juros);

    printf ("Informe por quantos meses o dinheiro ficará investido: \n");
    scanf ("%f", &meses);

    valorFinal = capital*pow((1+juros/100),meses);
    printf ("O valor de R$%.2f investido a uma taxa de juros de %f por cento em %f meses será de R$%.2f total", capital, juros, meses, valorFinal);
}
