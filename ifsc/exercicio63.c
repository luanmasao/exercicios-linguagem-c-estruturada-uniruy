//Questão 82 IFSC

#include<stdio.h>

int main()
{
    float preco;
    int cod_origem;

    printf("Informe o preço do produto: ");
    scanf("%f",&preco);
    printf("Informe o código de origem: ");
    scanf("%d",&cod_origem);

    if(cod_origem == 1)
    {
        printf("Preço: %.2f, Origem: Sul",preco);
    }
    else if(cod_origem == 2)
    {
        printf("Preço: %.2f, Origem: Norte",preco);
    }
    else if(cod_origem == 3)
    {
        printf("Preço: %.2f, Origem: Leste",preco);
    }
    else if(cod_origem == 4)
    {
        printf("Preço: %.2f, Origem: Oeste",preco);
    }
    else if(cod_origem == 5 || cod_origem == 6)
    {
        printf("Preço: %.2f, Origem: Nordeste",preco);
    }
    else if(cod_origem >= 7 && cod_origem <=9)
    {
        printf("Preço: %.2f, Origem: Sudeste",preco);
    }
    else if(cod_origem >= 10 && cod_origem <=20)
    {
        printf("Preço: %.2f, Origem: Centro Oeste",preco);
    }
    else if(cod_origem >= 25 && cod_origem <=35)
    {
        printf("Preço: %.2f, Origem: Nordeste",preco);
    }
    else
    {
        printf("Importado");
    }


    return 0;
}