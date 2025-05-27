//Questão 16 PUCRS

#include <stdio.h>
#include <math.h>

int main()
{
    int input;
    int contador_input = 0;

    while(1)
    {
        printf("\nInforme um número: ");
        scanf("%d",&input);
        
        if(input <= 0)
        {
            break;
        }

        printf("%d | %d | %d | %.2f ",input, input * input, input * input * input,
        sqrt(input));
    
        contador_input++;

        
        if(contador_input == 20)
        {
            printf("\nNúmero lido | Quadrado | Cubo | Raiz");
        }
        
    }

    return 0;
}