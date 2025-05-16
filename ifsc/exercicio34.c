//Questão 132 IFSC

#include <stdio.h>

int main()
{
    int matriz1[2][3] = {{4,3,2},{9,8,7}};
    int matriz2[3][2];
    int x,y;

    for(x=0;x <2; x++)
    {
        for(y=0;y<3;y++)
        {
            matriz2[y][x] = matriz1[x][y];
        }
    }
    
    printf("Matriz original:\n");
    for(x = 0; x < 2; x++)
    {
        for(y = 0; y < 3; y++)
        {
            printf("%d ", matriz1[x][y]);
        }
        printf("\n");
    }

    printf("Matriz transposta:\n");
    for(x = 0; x < 3; x++)
    {
        for(y = 0; y < 2; y++)
        {
            printf("%d ", matriz2[x][y]);
        }
        printf("\n");
    }

    return 0;
}

