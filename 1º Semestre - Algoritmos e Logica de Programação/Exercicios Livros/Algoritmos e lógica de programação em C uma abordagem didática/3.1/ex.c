#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL,"");

    int copia; float total;

    printf ("Informe a quantidade de copias: \n");
    scanf ("%i", &copia);

    if(copia >= 100){
        total = copia*0.20;
    } else {
        total = copia*0.25;
    }

    printf ("O valor a ser pago será: R$ %.2f", total);

}
