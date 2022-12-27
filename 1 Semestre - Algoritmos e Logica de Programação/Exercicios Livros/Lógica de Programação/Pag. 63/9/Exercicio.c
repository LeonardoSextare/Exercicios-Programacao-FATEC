#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");

    int dia, mes, signo;

    printf("Verificador de Signo\n");
    printf("Digite o dia de nascimento: ");
    scanf("%d", &dia);

    printf("Digite o mes de nascimento: ");
    scanf("%d", &mes);
    
    signo = mes*100+dia;

    // Utilizei a mesma estrutura do exercicio anterior para verificar datas validas, com pequenas alterações
    if (dia > 31 || dia < 1 || mes > 12 || mes < 1)
        printf("Data Invalida!");
    else if (mes == 2 && dia > 29)
        printf("Data Invalida!");
    else if (((mes % 2) == 0 && mes <= 7 && dia > 30) || ((mes % 2) != 0 && mes >= 8 && dia > 30))
        printf("Data Invalida!");

    else if (signo >= 1222 || signo <=120)
        printf("Capricornio");
    else if (signo >= 121 && signo <=219)
        printf("Aquario");
    else if (signo >= 220 && signo <=320)
        printf("Peixes");
    else if (signo >= 321 && signo <=420)
        printf("Aries");
    else if (signo >= 421 && signo <=521)
        printf("Touro");
    else if (signo >= 522 && signo <=621)
        printf("Gemeos");
    else if (signo >= 622 && signo <=722)
        printf("Cancer");
    else if (signo >= 723 && signo <=822)
        printf("Leao");
    else if (signo >= 823 && signo <=922)
        printf("Virgem");
    else if (signo >= 923 && signo <=1022)
        printf("Libra");
    else if (signo >= 1023 && signo <=1122)
        printf("Escorpiao");
    else if (signo >= 1123 && signo <=1221)
        printf("Sagitario");

    printf("\n\n");
    system("pause");
}