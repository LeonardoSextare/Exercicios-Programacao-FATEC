#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int inicio = 0, fim = 2;
    char animais[13][100] = {"Leao", "Cavalo", "Homem", "Macaco", "Morcego", "Baleia", "Avestruz", "Pinguim", "Pato", "Aguia", "Tartaruga", "Crocodilo", "Cobra"};

void main()
{
    setlocale(LC_ALL, "");

    char resposta[19][4];
    char pergunta[19][100] = {
        "Mamiferos", "Ave", "Reptil", "Quadrupedes", "Bipedes", "Voadores", "Aquaticos", "Nao-Voadores", "Nadadores", "de Rapina", "Com Casco", "Carnivoros", " Sem Patas", "Carnivoros", "Herbivoros", "Onivoros", "Frutivoros", "Tropicais", "Polares"};

    printf("<<<<<<<<<<<>Perguntas e Respostas<>>>>>>>>>>>\n");
    printf("Responda as perguntas a seguir e descubra qual animal se encaixa de acordo com as respostas!\n");
    printf("\nAnimais possiveis:\n");
    for (int i = 0; i <= 11; i++)
    {
        printf("%s, ", animais[i]);
        if (i == 11)
            printf("%s.", animais[i + 1]);
    }
    printf("\n\nResponda as perguntas somente com Sim ou Nao!!\nQuando estiver pronto pressione >>Enter<<");
    getchar();
    fflush(stdin);

    while (inicio <= fim)
    {
        int sim, nao;

        system("cls");
        printf("O animal eh da classe dos(as) %s?\n", pergunta[inicio]);
        // printf("sim %d, nao %d,\n", sim, nao);
        scanf("%s", &resposta[inicio]);
        // strcpy(resposta[inicio], "nao");

        sim = strncmp(resposta[inicio], "Sim", 4);
        nao = strncmp(resposta[inicio], "Nao", 4);
        if (sim != 0 && nao != 0)
        {
            sim = strncmp(resposta[inicio], "sim", 4);
            nao = strncmp(resposta[inicio], "nao", 4);
        }

        if (sim == 0)
        {
            alterarPergunta(inicio);
        }
        else if (nao == 0)
        {
            inicio++;
            if (inicio > fim)
            {
                system("cls");
                printf("Seu animal nao existe!!");
            }
        }
        else if (sim != 0 && nao != 0)
        {
            system("cls");
            printf("Responda somente com Sim ou Nao!!\nPressione Enter para continuar!");
            fflush(stdin);
            getchar();
        }
    }

    printf("\n\n");
    system("pause");
}

int alterarPergunta(int x)
{

    switch (x)
    {
    case 0:
        inicio = 3;
        fim = 6;
        break;

    case 1:
        inicio = 7;
        fim = 9;
        break;

    case 2:
        inicio = 10;
        fim = 12;

    case 3:
        inicio = 13;
        fim = 14;
        break;

    case 4:
        inicio = 15;
        fim = 16;
        break;

    case 5:
        printf("O animal escolhido foi: Morcego");
        inicio = fim + 1;
        break;

    case 6:
        printf("O animal escolhido foi: Baleia");
        inicio = fim + 1;
        break;

    case 7:
        inicio = 17;
        fim = 18;
        break;

    case 8:
        printf("O animal escolhido foi: Pato");
        inicio = fim + 1;
        break;

    case 9:
        printf("O animal escolhido foi: Aguia");
        inicio = fim + 1;
        break;

    case 10:
        printf("O animal escolhido foi: Tartaruga");
        inicio = fim + 1;
        break;

    case 11:
        printf("O animal escolhido foi: Crocodilo");
        inicio = fim + 1;
        break;

    case 12:
        printf("O animal escolhido foi: Cobra");
        inicio = fim + 1;
        break;

    case 13:
        printf("O animal escolhido foi: Leão");
        inicio = fim + 1;
        break;

    case 14:
        printf("O animal escolhido foi: Cavalo");
        inicio = fim + 1;
        break;

    case 15:
        printf("O animal escolhido foi: Homem");
        inicio = fim + 1;
        break;

    case 16:
        printf("O animal escolhido foi: Macaco");
        inicio = fim + 1;
        break;

    case 17:
        printf("O animal escolhido foi: Avestruz");
        inicio = fim + 1;
        break;

    case 18:
        printf("O animal escolhido foi: Pinguim");
        inicio = fim + 1;
        break;
    }
}