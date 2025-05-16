//Questão 46 IFSC

#include <stdio.h>

int main()
{
    char nome[50];
    int diarias;
    float total;

    printf("Informe o nome do cliente: ");
    scanf("%s",nome);
    printf("Informe a quantidade de diárias: ");
    scanf("%d",&diarias);

    if(diarias > 15)
    {
        total = (diarias * 5.50) + (60 * diarias);
    }
    else if(diarias == 15)
    {
        total = (diarias * 6) + (60 * diarias);
    }
    else if(diarias < 15)
    {
        total = (diarias * 8) + (60 * diarias);
    }

    printf("Nome do cliente: %s. Total da conta: %.2f",nome,total);

    return 0;
}