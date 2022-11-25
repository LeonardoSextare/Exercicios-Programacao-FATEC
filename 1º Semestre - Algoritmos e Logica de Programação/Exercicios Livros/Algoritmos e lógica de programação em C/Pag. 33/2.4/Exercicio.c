#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main(){
    setlocale (LC_ALL,"");

    int arquivo, conexao;

    printf("Informe o tamanho do arquivo em Bits:\n");
    scanf("%d", &arquivo);

    printf("Informe a velocidade da conexão em Bits por segundo:\n");
    scanf("%d", &conexao);

    printf("O seu arquivo será baixado em %d segundo(s)", arquivo/conexao);

    printf("\n\n");
    system("pause");
}
