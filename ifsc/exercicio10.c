//Questão 88 IFSC

#include <stdio.h>

int main()
{
    int x;
    int soma = 0;

    for(x = 1; x<=100; x++)
    {
        soma += x;
    }

    printf("A soma dos números de 1 a 100 é: %d", soma);

    return 0;
}