//Questão 133 IFSC

#include <stdio.h>

int main()
{
    int input, x,y, soma = 0;
    int matriz1[2][3];

    printf("Informe os elementos da matriz 2x3: \n");

    for(x = 0; x <2; x++)
    {
        for(y = 0; y < 2; y++)
        {
            printf("Elemento [%d][%d]", x, y );
            scanf("%d",&matriz1[2][3]);
        }
    }

    for(x = 0; x <2; x++)
    {
        for(y = 0; y < 2; y++)
        {
           soma += matriz1[x][y];
        }
    }

    printf("Soma dos elementos da matriz: %d", soma);
 
    return 0;
}