#include <stdio.h>
#include <locale.h>

void main(){
    setlocale (LC_ALL,"");

    float largura, comprimento, valorCarpete;

    printf ("Informe a largura da sala em metros: \n");
    scanf ("%f", &largura);

    printf ("Informe o comprimento da sala em metros: \n");
    scanf ("%f", &comprimento);

    printf ("Informe o valor do metro quadrado do Carpete: \n");
    scanf ("%f", &valorCarpete);

    printf ("Você vai precisar de R$%.2f para preencher todo o piso da sala", (largura*comprimento)*valorCarpete );
}
