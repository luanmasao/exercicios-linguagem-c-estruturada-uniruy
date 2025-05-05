//Questão 126 IFSC

#include <stdio.h>

int main()
{
    int vetor1[] = {5,2,4,1};
    int vetor2[4];

    for (int c = 0; c < 4; c++) {
        vetor2[c] = vetor1[c];
    }

    for (int c = 0; c < 4; c++) {
        printf("%d ", vetor2[c]);
    }


    return 0;
}