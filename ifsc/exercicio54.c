//Questão 40 IFSC

#include <stdio.h>

int main() {
    char nome_cliente[50];
    int qnt_parafusos, qnt_porcas, qnt_arruelas;
    float valor_parafusos = 0.30, valor_porcas = 0.20, valor_arruelas = 0.10;
    float desconto_parafusos = 0.0, desconto_porcas = 0.0, desconto_arruelas = 0.0;

    printf("Informe o nome do cliente: ");
    scanf(" %[^\n]", nome_cliente); 

    printf("Informe a quantidade de parafusos: ");
    scanf("%d", &qnt_parafusos);
    printf("Informe a quantidade de porcas: ");
    scanf("%d", &qnt_porcas);
    printf("Informe a quantidade de arruelas: ");
    scanf("%d", &qnt_arruelas);

    if (qnt_parafusos > 0) 
    {
        desconto_parafusos = qnt_parafusos * valor_parafusos * 0.20;
    }
    if (qnt_porcas > 0) 
    {
        desconto_porcas = qnt_porcas * valor_porcas * 0.10;
    }
    if (qnt_arruelas > 0) 
    {
        desconto_arruelas = qnt_arruelas * valor_arruelas * 0.30; 
    }

    float desconto_total = desconto_parafusos + desconto_porcas + desconto_arruelas;
    float valor_total = (valor_parafusos * qnt_parafusos) + (valor_porcas * qnt_porcas) + (valor_arruelas * qnt_arruelas);
    float valor_final = valor_total - desconto_total;

    printf("Cliente: %s\n", nome_cliente);
    printf("Quantidade de parafusos: %d\n", qnt_parafusos);
    printf("Quantidade de porcas: %d\n", qnt_porcas);
    printf("Quantidade de arruelas: %d\n", qnt_arruelas);
    printf("Total de desconto: R$ %.2f\n", desconto_total);
    printf("Valor total a pagar: R$ %.2f\n", valor_final);

    return 0;
}
