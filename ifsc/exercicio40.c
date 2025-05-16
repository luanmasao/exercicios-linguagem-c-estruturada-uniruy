//Questão 16 IFSC

#include <stdio.h>

int main()
{
    int A,B, salvar_A = 0;

    printf("Informe o valor da variável A: ");
    scanf("%d",&A);

    printf("Informe o valor da variável B: ");
    scanf("%d",&B);

    salvar_A = A;
    A = B;
    B = salvar_A;

    printf("Valor trocado de A: %d\n",A);
    printf("Valor trocado de B: %d",B);

    return 0;
}
