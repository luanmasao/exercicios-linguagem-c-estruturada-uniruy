//Questão 41 IFSC
//Foi considerado o salário mínimo de 1518 reais

#include <stdio.h>

int main()
{
    float totalvendido, salario;
    int totalcarros;

    printf("Informe o valor total de vendas: ");
    scanf("%f", &totalvendido);

    printf("Informe o número de carros vendidos: ");
    scanf("%d", &totalcarros);

    salario = (2 * 1518) + (totalcarros * 50) + (totalvendido * 0.05);

    printf("O salário total é: R$ %.2f\n", salario);

    return 0;
}
