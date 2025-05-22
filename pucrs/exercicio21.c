//Questão 49 PUCRS

#include <stdio.h>

int main()
{
    int N,x, fatorial = 1;

    printf("Informe um valor inteiro e positivo: ");
    scanf("%d",&N);

    if(N < 0)
    {
        printf("O número informado deve ser positivo!");
    }
    else
    {
        for(x = 1; x <= N; x++)
        {
        fatorial *= x;
        }

        printf("Fatorial: %d",fatorial);

    }

    return 0;
}