//Questão 55 IFSC

#include <stdio.h>

int main()
{
    float nota1,nota2,nota3;

    printf("Informe a primeira nota: \n");
    scanf("%f", &nota1);

    printf("Informe a segunda nota: \n");
    scanf("%f", &nota2);

    printf("Informe a terceira nota: \n");
    scanf("%f", &nota3);

    float media = (nota1 + nota2 + nota3) / 3 ;

    printf("Média: %.2f \n", media);

    if(media>=7)
    {
        printf("Aprovado");
    }

    else if(media >= 4)
    {
        printf("Em prova final");
    }

    else
    {
        printf("Reprovado");
    }


    return 0;
}