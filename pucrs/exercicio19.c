//Questão 50 PUCRS
#include <stdio.h>

int main()
{
    int x,y,produto = 1, contador;
    
    printf("Informe valores para a função: X ^ Y \n");
    
    do {
        printf("X: ");
        scanf("%d", &x);
        if (x <= 0) 
        {
            printf("X deve ser positivo!\n");
        }
    } 
    while (x <= 0);

    do {
        printf("Y: ");
        scanf("%d", &y);
        if (y <= 0) 
        {
            printf("Y deve ser positivo.\n");
        }
    } 
    while (y <= 0);
    
    for(contador = 0; contador < y;contador++)
    {
        produto *= x;
    }

    printf("Resultado: %d",produto);

    return 0;
}

