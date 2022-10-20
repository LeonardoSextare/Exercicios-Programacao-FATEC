#include <stdio.h>
#include <locale.h>

void main(){
    setlocale (LC_ALL,"");

    float comprimento, largura;

    printf ("Digite a largura e o comprimento da sala: \n");
    scanf ("%f %f", &comprimento, &largura);

    printf ("A quantidade de metros quadrados da sala é: %f", comprimento*largura);
}
