//Questão 44 IFSC

#include <stdio.h>

int main()
{
    int input;
    float tipo1 = 0.50, tipo2 = 0.60, tipo3 = 0.75, total;
    int cont1 = 0, cont2 = 0, cont3 = 0;

    do
    {
        printf("Tipo de picolé vendido(Digite 1,2 ou 3)(0 para parar): ");
        scanf("%d",&input);

        if(input == 1)
        {
            cont1++;
        }
        else if(input == 2)
        {
            cont2++;
        }
        else if(input == 3)
        {
            cont3++;
        }
        else if (input != 0)
        {
            printf("Tipo inválido! Digite 1, 2 ou 3.(0 para parar)\n");
        }

    }while(input !=0);

    printf("Quantidade de vendas Tipo 1: %d.Total em reais: %.2f\n", cont1, cont1 * tipo1);
    printf("Quantidade de vendas Tipo 2: %d.Total em reais: %.2f\n", cont2, cont2 * tipo2);
    printf("Quantidade de vendas Tipo 3: %d.Total em reais: %.2f\n", cont3, cont3 * tipo3);

    total = (cont1++ * tipo1) + (cont2++ * tipo2) + (cont3++ * tipo3);
    printf("Total arrecadado: %.2f",total);

    return 0;
}