//Questão 36 PUCRS

#include <stdio.h>

int main()
{
    int N;
    int contador = 0;
    int produto = 1;
    int input;
    int x;

    printf("Informe quantos valores devem ser lidos: ");
    scanf("%d",&N);

    while(contador < N)
    {
        printf("Informe um número: ");
        scanf("%d",&input);
        for(x = 1; x <= input; x++)
        {
            produto *= x; 
        }
        printf("Número lido: %d | Fatorial: %d\n",input,produto);
        contador++;
        produto = 1;
    }

    return 0;
}