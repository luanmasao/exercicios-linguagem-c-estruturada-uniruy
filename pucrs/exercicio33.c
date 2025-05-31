//Questão 43 PUCRS

#include <stdio.h>

int main()
{
    int grupo[5][4];
    int x, y, j, temp;

    for (x = 0; x < 5; x++)
    {
        for (y = 0; y < 4; y++)
        {
            printf("Grupo %d, informe um valor para [%d][%d]: ", x + 1, x, y);
            scanf("%d", &grupo[x][y]);
        }
    }

    printf("\nValores na ordem original:\n");
    for (x = 0; x < 5; x++)
    {
        printf("Grupo %d: ", x + 1);
        for (y = 0; y < 4; y++)
        {
            printf("%d ", grupo[x][y]);
        }
        printf("\n");
    }

    for (x = 0; x < 5; x++)
    {
        for (j = 0; j < 3; j++)
        {
            for (y = j + 1; y < 4; y++)
            {
                if (grupo[x][j] < grupo[x][y])
                {
                    temp = grupo[x][j];
                    grupo[x][j] = grupo[x][y];
                    grupo[x][y] = temp;
                }
            }
        }
    }

    printf("\nValores na ordem decrescente:\n");
    for (x = 0; x < 5; x++)
    {
        printf("Grupo %d: ", x + 1);
        for (y = 0; y < 4; y++)
        {
            printf("%d ", grupo[x][y]);
        }
        printf("\n");
    }

    return 0;
}
