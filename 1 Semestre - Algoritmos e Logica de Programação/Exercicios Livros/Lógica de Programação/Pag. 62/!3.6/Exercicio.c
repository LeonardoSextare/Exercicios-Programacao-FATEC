// Obrigado ao professor Cristiano da FATEC Jales por ajudar na resolução do exercicio!!

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

   setlocale(LC_ALL, "");

    int fibo,n1=0,n2=1;

    printf("Sequencia Fibonnaci\n");
    printf("1 - %d\n", n2);

    for (int i = 1; i < 20; i++)
    {
        fibo = n1 + n2;
        printf("%d - %d\n",i+1,fibo);
        n1 = n2;
        n2 = fibo;
    }
    
    printf("\n\n");
    system("pause");
}