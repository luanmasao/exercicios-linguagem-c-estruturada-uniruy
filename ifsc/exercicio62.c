//Questão 68 IFSC

#include <stdio.h>

int main()
{
    float salario,novo_salario;
    float limite = 318.20;

    printf("Informe o salário do funcionário: ");
    scanf("%f",&salario);

    float desconto = (salario * 0.11);

    if(desconto > limite)
    {
        desconto = limite;
    }

    novo_salario = salario - desconto;

    printf("Salário após desconto: R$ %.2f", novo_salario);

    return 0;
}