//Questão 131 IFSC

#include <stdio.h>

int main()
{
    int matriz1[2][3] = {{2,2,2},{2,2,2}};
    int matriz2[2][3] = {{2,2,2},{2,2,2}};
    int matriz3[2][3];
    
    for(int x=0; x < 2; x++)
    {
        for(int y=0; y < 3; y++)
        {
            matriz3[x][y] = matriz1[x][y] + matriz2[x][y];
        }
    }
    
    for(int x=0; x < 2; x++)
    {
        for(int y=0; y < 3; y++)
        {
            printf("%d",matriz3[x][y]);
        }
        printf("\n");
    }
    return 0;
}