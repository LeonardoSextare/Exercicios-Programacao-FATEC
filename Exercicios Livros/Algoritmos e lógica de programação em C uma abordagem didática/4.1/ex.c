#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");
    char civil;

    printf("Informe seu estado civil digitando apenas uma letra: s, c, d ou v:\n");
    scanf("%c", &civil);

    if(civil == 's'){
    printf("O estado civil �: Solteiro");
    } else
    if(civil == 'c'){
        printf("O estado civil �: Casado");
    } else
    if(civil == 'd'){
        printf("O estado civil �: Divorciado");
    } else
    if(civil == 'v'){
        printf("O estado civil �: Viuvo");
    }
}
