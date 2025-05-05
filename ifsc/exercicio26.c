//Questão 73 IFSC

#include <stdio.h>
#include <math.h>

int main()
{
    int input;
    float input2, resultado;

    printf("Escolha a opção: \n");
    printf("101-Raiz quadrada\n");
    printf("102-A metade\n");
    printf("103-10%% do número \n");
    printf("104-O dobro \n");
    scanf("%d",&input);

    printf("Informe um número: ");
    scanf("%f",&input2);

    if(input == 101)
    {
        resultado = sqrt(input2);
        printf("Resultado: %.2f",resultado);
    }
    if(input == 102)
    {
        resultado = input2/2;
        printf("Resultado: %.2f",resultado);
    }
    if(input == 103)
    {
        resultado = input2 * 0.10;
        printf("Resultado: %.2f",resultado);
    }
    if(input == 104)
    {
        resultado = input2 * 2;
        printf("Resultado: %.2f",resultado);
    }
    
    return 0;
}