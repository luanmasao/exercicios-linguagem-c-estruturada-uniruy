//Questão 35 PUCRS

#include <stdio.h>

int main()
{
    float altura;
    int codigo;
    float media;
    float media_mulheres;
    int contador_turma = 0;
    int contador_mulheres = 0;
    float menor_altura = 10;
    float maior_altura = 0;
    float soma_turma = 0;
    float soma_mulheres = 0;

    while(contador_turma < 50)
    {
        printf("Informe a altura(Ex: 1.75): ");
        scanf("%f",&altura);
        printf("Informe o sexo(Utilize códigos 1: M, 2: F): ");
        scanf("%d",&codigo);

        if(altura > maior_altura)
        {
            maior_altura = altura;
        }
        if(altura < menor_altura)
        {
            menor_altura = altura;
        }

        if(codigo == 2)
        {
            contador_mulheres++;
            soma_mulheres += altura;
        }
        
        soma_turma += altura;
        contador_turma++;

    }

    media = soma_turma / contador_turma;
    media_mulheres = soma_mulheres / contador_mulheres;

    printf("Média de altura da turma: %.2f M\n",media);
    printf("Média de altura das mulheres: %.2f M\n",media_mulheres);
    printf("Maior altura: %.2f M\n",maior_altura);
    printf("Menor altura: %.2f M\n",menor_altura);

    return 0;
}