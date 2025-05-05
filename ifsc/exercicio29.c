//Questão 128 IFSC

#include <stdio.h>

int main()
{
    int vetor1[] = {1, 2, 3, 4};
    int vetor2[] = {5, 6, 7, 8};
    int vetor3[8];


    for (int c = 0; c < 4; c++) 
    {
        vetor3[c] = vetor1[c];
    }


    for (int c = 0; c < 4; c++) 
    {
        vetor3[c + 4] = vetor2[c];
    }


    for (int c = 0; c < 8; c++) 
    {
        printf("%d ", vetor3[c]);
    }

    return 0;
}
