//Questão 79 IFSC

#include <stdio.h>

int main()
{
    char input;

    printf("Informe a primeira letra do seu estado civil: ");
    scanf("%c", &input);

    if(input == 's')
    {
        printf("Você é Solteiro");
    }
    else if(input == 'c')
    {
        printf("Você é Casado");
    }
    else if(input == 'v')
    {
        printf("Você é Viúvo");
    }
    else if(input == 'd')
    {
        printf("Você é divorciado");
    }
    else
    {
        printf("Valor inválido foi inserido!");
    }

    return 0;
}