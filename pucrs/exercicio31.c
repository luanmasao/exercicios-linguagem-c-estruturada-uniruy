//Questão 10 PUCRS

#include <stdio.h>

int main()
{
    int codigo;
    float nota1;
    float nota2;
    float nota3;
    float media;


    while(1)
    {
        printf("Código do aluno: ");
        scanf("%d",&codigo);

        if(codigo < 0)
        {
            break;
        }

        print("Informe a primeira nota: ");
        scanf("%f",&nota1);
        print("Informe a segunda nota: ");
        scanf("%f",&nota2);
        print("Informe a terceira nota: ");
        scanf("%f",&nota3);

        if(nota1 >= nota2 && nota1 >= nota3)
        {
            media = (nota1 * 4 + nota2 * 3 + nota3 * 3) / 10;
        }
        else if(nota2 >= nota1 && nota2 >= nota3)
        {
            media = (nota2 * 4 + nota1 * 3 + nota3 *3) / 10;
        }
        else
        {
            media = (nota3 * 4 + nota1 * 3 + nota2 * 3) / 10;
        }

        printf("Código do aluno: %d\n",codigo);
        printf("Nota 1: %d\n",nota1);
        printf("Nota 2: %d\n",nota2);
        printf("Nota 3: %d\n",nota3);
        if(media >= 5)
        {
            printf("APROVADO\n");
        }
        else
        {
            printf("REPROVADO\n");        
        }
    }

    return 0;
}