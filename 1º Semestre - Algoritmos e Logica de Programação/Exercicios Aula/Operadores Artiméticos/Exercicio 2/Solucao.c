#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    float nota1, nota2, nota3, nota4, media;
    char aluno[50];
    printf("Digite o nome do aluno:\n");
    gets (aluno);

    printf("Digite as notas do aluno: \n");
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

    media = (nota1 + nota2 + nota3 + nota4)/4;
    printf("Aluno: %s \nMédia: %f \n", aluno, media);

    system("pause");

}
