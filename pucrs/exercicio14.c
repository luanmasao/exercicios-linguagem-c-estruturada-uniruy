//Questão 40 PUCRS

#include <stdio.h>

int main()
{
    int n, x, m, soma = 0, fatorial = 1;

    printf("Informe a quantidade de leituras: \n");
    scanf("%d", &n);

    printf("Informe um valor: \n");

    for(x = 1; x <= n; x++)
    {
        scanf("%d",&m);

        for(x = 1; x<=m; x++)
        {
            soma += x;
        }

        for(x = 1; x <= m; x++)
        {
            fatorial *= x;
        }

        printf("Valor: %d | Soma: %d | Fatorial %d", m, soma, fatorial);
    }

    return 0;
}

