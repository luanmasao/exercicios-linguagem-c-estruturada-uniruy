//Questão 19 PUCRS

#include <stdio.h>

int main()
{
    int input;
    int contador_par = 0;
    int contador_impar = 0;
    float media_pares = 0.0f;
    float media_geral = 0.0f;
    int soma_par = 0;
    int soma_total = 0;

    while(1)
    {   
        printf("Informe um número: ");
        scanf("%d",&input);

        if(input <= 0)
        {
            break;
        }

        if(input % 2 == 0)
        {
            contador_par++;
            soma_par += input;
            soma_total += input;
        }
        else if(input % 2 != 0)
        {
            contador_impar++;
            soma_total += input;
        }
        

    }

    media_pares = soma_par/contador_par;
    media_geral = soma_par/(contador_par + contador_impar);

    printf("Quantidade de números pares: %d\n",contador_par);
    printf("Quantidade de números impares: %d\n",contador_impar);
    printf("Média de valores pares: %.2f\n",media_pares);
    printf("Média geral dos valores: %.2f\n",media_geral);

    return 0;
}

