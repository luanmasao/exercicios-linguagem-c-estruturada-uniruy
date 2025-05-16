//Questão 26 IFSC

#include <stdio.h>

int main()
{
    float input, desconto_previdencia, desconto_imposto,salario1,salario2,salario_final;

    printf("Informe seu salário bruto: ");
    scanf("%f",&input);

    desconto_previdencia = 0.10 * input;
    salario1 = input - desconto_previdencia;
    desconto_imposto = salario1 * 0.05;
    salario2 = salario1 - desconto_imposto;

    printf("O salário líquido é: %.2f",salario2);

    return 0;
}