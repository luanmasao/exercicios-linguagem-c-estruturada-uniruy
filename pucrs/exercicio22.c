//Questão 46 PUCRS

#include <stdio.h>

int main()
{
    char sexo;
    char olhos;
    char cabelos;
    int idade;
    int contador_feminino = 0;
    int contador_candidatos = 1;
    int maior_idade = 0;

    while(contador_candidatos <= 500)
    {
        printf("Informe os dados do candidato %d\n",contador_candidatos);
        
        printf("Sexo(M,F): ");
        scanf(" %c",&sexo);
        
        printf("Cor dos olhos(A,V,C): ");
        scanf(" %c",&olhos);
        
        printf("Cor dos cabelos(L,C,P): ");
        scanf(" %c",&cabelos);
        
        printf("Idade: ");
        scanf("%d",&idade);

        if(idade > maior_idade)
        {
            maior_idade = idade;
        }
        if(sexo == 'F')
        {
            if(olhos == 'V' && cabelos == 'L')
            {
                if(idade >= 18 && idade <=35)
                {
                contador_feminino++;
                }
            }   
        }

        contador_candidatos++;
    }

    printf("Resultados da Pesquisa:\n");
    printf("Maior idade do grupo: %d anos\n", maior_idade);
    printf("Quantidade de indivíduos do sexo feminino, com idade entre 18 e 35 anos, olhos verdes e cabelos louros: %d\n", contador_feminino);

    return 0;
}