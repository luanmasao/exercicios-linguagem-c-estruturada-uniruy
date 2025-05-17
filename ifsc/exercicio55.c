//Questão 51 IFSC

#include <stdio.h>

int main()
{
    int num1,num2;

    printf("Informe o primeiro número: ");
    scanf("%d",&num1);

    printf("Informe o segundo número: ");
    scanf("%d",&num2);

    if(num1 > num2)
    {
        printf("O primeiro número é maior que o segundo");    
    }

    else if(num2 > num1)
    {
        printf("O segundo número é maior que o primeiro");    
    }

    return 0;
}