#include <stdio.h>
#include <locale.h>

void main(){
    setlocale (LC_ALL,"");

    int arquivo, conexao;

    printf("Informe o tamanho do arquivo em Bits");
    scanf("%d", &arquivo);

    printf("Informe a velocidade da conexão em Bits por segundos");
    scanf("%d", &conexao);

    printf("O seu arquivo será baixado em %d segundos", arquivo/conexao);
}
