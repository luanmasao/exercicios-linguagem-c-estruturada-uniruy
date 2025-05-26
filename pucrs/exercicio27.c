//Questão 24 PUCRS

#include <stdio.h>

int main()
{
    char sexo;
    char cor_olhos;
    char cor_cabelos;
    int maior_idade = 0;
    int idade;
    int contador_cores = 0;

    while(1)
    {
        printf("Informe a idade: ");
        scanf("%d",&idade);

        if(idade == -1)
        {
            break;
        }
        else if(idade > maior_idade)
        {
            maior_idade = idade;
        }

        printf("Informe o sexo(M,F): ");
        scanf(" %c",&sexo);
        printf("Informe a cor dos olhos(A,V,C): ");
        scanf(" %c",&cor_olhos);
        printf("Informe a cor dos cabelos(L,C,P): ");
        scanf(" %c",&cor_cabelos);

        if(sexo == 'F'){
        if(idade >= 18 && idade <=35)
        {
            if(cor_olhos == 'V' && cor_cabelos == 'L')
            {
                contador_cores++;
            }
        }
        }
    }

    printf("A maior idade dos habitantes é: %d\n",maior_idade);
    printf("A quantidade de indivíduos do sexo feminino entre 18 e 35 anos, com olhos verdes e cabelos louros: %d",contador_cores);

    return 0;
}