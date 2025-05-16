//Questão 80 IFSC

#include <stdio.h>

int main()
{
    int dia;

    printf("Informe o número correspondente ao dia da semana: ");
    scanf("%d",&dia);

    switch(dia)
    {
        case 1:
            printf("Segunda-feira");
            break;
        case 2:
            printf("Terça-feira");
            break;
        case 3:
            printf("Quarta-feira");
            break;
        case 4:
            printf("Quinta-feira");
            break;
        case 5:
            printf("Sexta-feira");
            break;
        case 6:
            printf("Sábado");
            break;
        case 7:
            printf("Domingo");
            break;
        default:
            printf("Número inválido! Digite um valor de 1 a 7.");
            break;
    }

    return 0;
}