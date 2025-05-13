//Questão 129 IFSC

#include <stdio.h>

int main()
{
    int x,temp;
    int N[20];

    for(x=0; x <20;x++)
    {
        printf("Informe o valor da posição %d: ",x);
        scanf("%d",&N[x]);
    }

    printf("Vetor original: \n");
    for(x = 0; x < 20; x++) 
    {
        printf("%d ", N[x]);
    }

    for(x = 0; x < 10; x++) 
    {
        temp = N[x];
        N[x] = N[19 - x];
        N[19 - x] = temp;
    }

    printf("\n Vetor invertido:\n");
    for(x = 0; x < 20; x++) {
        printf("%d ", N[x]);
    }

    return 0;
}