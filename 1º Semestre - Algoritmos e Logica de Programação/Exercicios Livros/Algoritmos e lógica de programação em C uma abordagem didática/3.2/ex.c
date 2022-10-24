#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    int produzidas, defeituosas; float defeituosasPorCento;

    printf("Informe o numero de peças produzidas: \n");
    scanf("%i", &produzidas);

    printf ("Informe o numero de peças defeituosas\n");
    scanf("%i",&defeituosas);

    defeituosasPorCento = (10*produzidas)/100;



    if(defeituosas >= defeituosasPorCento){

        printf("A maquina precisa de manutenção!");
    } else {
        printf("A maquina não precisa de manutenção!");

    }
}
