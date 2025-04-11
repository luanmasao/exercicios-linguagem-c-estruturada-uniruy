//Questão 97 IFSC

#include <stdio.h>

int main()
{
    int input, x;

    printf("Informe um número(Tabela de multiplicação de 1 a 13: \n");
    scanf("%d", &input);

    for(x = 1; x <= 13; x++)
    {
        printf("%d",x * input); 
    }

    return 0;
}