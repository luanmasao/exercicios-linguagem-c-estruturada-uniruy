//Questão 7 PUCRS

#include <stdio.h>

int main()
{
    int nota1, nota2, nota3, codigo, media;

    while(1)
        {
            
            printf("Calcule a média de 3 notas. Informe o código do aluno: ");
            scanf("%d", &codigo);
            
            if(codigo==0)
            {
                break;
            }

            printf("Informe a primeira nota: ");
            scanf("%d", &nota1);
    
            printf("Informe a segunda nota: ");
            scanf("%d", &nota2);
    
            printf("Informe a terceira nota: ");
            scanf("%d", &nota3);
    
            media = (nota1 + nota2 + nota3)/ 3;
    
            printf("A média aritmética das 3 notas do aluno(Código %d) é: %d \n", codigo, media);

        }

    return 0;

}