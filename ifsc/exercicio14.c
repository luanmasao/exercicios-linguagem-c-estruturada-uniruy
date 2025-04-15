//Questão 97 IFSC

#include <stdio.h>

int main()
{
    int input, x, produto = 1;

    printf("Informe um número(Tabela de multiplicação de 1 a 13): \n");
    scanf("%d", &input);

    for(x = 1; x <= 13; x++)
    {
        produto = x * input;
        printf("%d * %d = %d \n",x, input, produto); 
    }

    return 0;
}
