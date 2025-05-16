//Questão 19 IFSC

#include <stdio.h>

int main()
{
    int input,quadrado,cubo;

    printf("Informe um valor: \n");
    scanf("%d",&input);

    quadrado = input * input;
    cubo = input * input * input;

    printf("Quadrado: %d\n", quadrado);
    printf("Cubo: %d\n", cubo);

    return 0;
}