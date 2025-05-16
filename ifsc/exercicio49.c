//Questão 106 IFSC

#include <stdio.h>

int main()
{
    int input, soma = 0,contador;
    float media;

    while(1)
    {
        printf("Informe um número(9999 é o sentinela): ");
        scanf("%d",&input);

        if(input == 9999)
        {
            break;
        }

        soma += input;
        contador++;
    }

    media = (float)soma/ contador; 
    printf("A soma é: %d",soma);
    printf("A média é; %f",media);

    return 0;
}