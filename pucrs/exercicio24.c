//Questão 9 PUCRS

#include <stdio.h>
#include <limits.h>

int main()
{
    int menor = INT_MAX;
    int maior = INT_MIN;
    int contador = 1;
    int input;

    while(contador <=50)
    {
        printf("Informe o valor %d: ",contador);
        scanf("%d",&input);

        if(input > maior)
        {
            maior = input;
        }
        if(input < menor)
        {
            menor = input;
        }

        contador++;
    }

    printf("O maior valor é: %d\n",maior);
    printf("O menor valor é: %d\n",menor);

    return 0;
}