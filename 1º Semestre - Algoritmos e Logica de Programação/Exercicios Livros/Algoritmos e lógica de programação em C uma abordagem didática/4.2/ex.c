#include <stdio.h>
#include <locale.h>

void main(){
    setlocale (LC_ALL,"");

    int num;
    printf ("Selecione a opção deseja: 1- Saldo, 2- Extrato, 3- Saque, 4 - Sair");
    scanf ("%i", &num);

    if (num == 1){
        printf ("Você selecionou Saldo");
    } else if (num == 2) {
        printf ("Você selecionou Extrato");
    } else if (num == 3){
        printf ("Você selecionou Saque");
    } else if (num == 4){
        printf ("Você selecionou Sair");
    }
}
