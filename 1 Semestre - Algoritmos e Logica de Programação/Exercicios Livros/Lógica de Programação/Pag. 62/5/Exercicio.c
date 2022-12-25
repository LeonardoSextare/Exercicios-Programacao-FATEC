//O Exercicio proposto era o usuario inserir a data atual, porém decidi incrementar para pegar o horario da maquina.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h> // Biblioteca para Puxar a data local da maquina

int main(void)
{
    setlocale(LC_ALL, "");
    
    struct tm *data;
    time_t segundos;
    time(&segundos);
    data = localtime(&segundos);

    int diaNasc, mesNasc, anoNasc, dia, mes, ano;

    dia = data->tm_mday;
    mes = data->tm_mon + 1;
    ano = data->tm_year + 1900;

    printf("Informe a sua data de nascimento:\n");
    printf("Dia: ");
    scanf("%d", &diaNasc);

    printf("Mês: ");
    scanf("%d", &mesNasc);

    printf("Ano: ");
    scanf("%d", &anoNasc);
    
    
    printf("Você tem %d Anos, %d Meses e %d dias", ano-anoNasc, mes-mesNasc, dia-diaNasc);

    printf("\n\n");
    system("pause");
}