//Questão 76 IFSC
//O início de cada estação é baseado nas previsões para o ano de 2025: outono = 20 de março, inverno = 20 de junho, primavera = 22 setembro e verão = 21 dezembro.
//Foi considerado uma média de 30 dias para cada mês.

#include <stdio.h>

int main()
{
    int dia, mes, ano;

    printf("Verifique a estação do ano: \n");
    printf("Informe o dia: ");
    scanf("%d", &dia);
    printf("Informe o mês: ");
    scanf("%d", &mes);
    printf("Informe o ano: ");
    scanf("%d", &ano);

    int quantidade_dias = (mes - 1) * 30 + dia;

    if(quantidade_dias <80)
    {
        printf("A estação é o Verão!");    
    } 

    else if(quantidade_dias >= 80 && quantidade_dias < 170)
    {
        printf("A estação é o Outono!");
    }

    else if(quantidade_dias >= 170 && quantidade_dias < 232)
    {
        printf("A estação é o Inverno!");
    }

    else if(quantidade_dias >= 232 && quantidade_dias < 351)
    {
        printf("A estação é a Primavera!");
    }

    else if(quantidade_dias >= 351 )
    {
        printf("A estação é o Verão!");
    }

    return 0;
}