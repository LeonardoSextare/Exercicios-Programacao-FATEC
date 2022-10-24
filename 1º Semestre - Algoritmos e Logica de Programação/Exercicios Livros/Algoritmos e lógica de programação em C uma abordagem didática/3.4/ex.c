#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    float a, b, c;

    printf ("Informe as 3 medidas: \n");
    scanf("%f %f %f", &a, &b, &c);

    if ((a+b)> c && (a+c) > b && (b+c) > a){
     printf ("Os 3 lados formam um triangulo\n");

    if (a == b && a == c){
        printf ("Equilatero\n");
    } else if (a == b || a == c || b == c){
        printf("Isosceles\n");
    } else {
        printf("Escaleno\n");
    }
    } else {
        printf ("Os 3 lados não formam um triangulo!\n");
    }
}
