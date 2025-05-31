//Questão 11 PUCRS

#include <stdio.h>

int main()
{
    int n;
    int a1;
    int r;
    int x;
    int soma_final = 0;
    int soma;

    printf("Informe n: ");
    scanf("%d", &n);

    printf("Informe a1: ");
    scanf("%d", &a1);

    printf("Informe r: ");
    scanf("%d", &r);

    soma = a1;

    printf("Termos da progressão: ");
    for (x = 0; x < n; x++)
    {
        printf("%d ", soma);
        soma_final += soma; 
        soma += r;          
    }

    printf("\nSoma dos termos: %d\n", soma_final);

    return 0;
}
