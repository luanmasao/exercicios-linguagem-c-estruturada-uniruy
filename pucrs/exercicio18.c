//Questão 51 PUCRS

#include <stdio.h>

int main()
{
    int input,x,produto = 1;

    printf("Informe um número: ");
    scanf("%d",&input);

    for(x=1;x <= input;x++)
    {
        produto *= x;
    }

    printf("Fatorial é: %d",produto);

    return 0;
}