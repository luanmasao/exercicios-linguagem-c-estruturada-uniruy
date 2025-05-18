//Questão 52 IFSC

#include <stdio.h>

int main()
{
    int num1,num2;

    printf("Informe o primeiro número: ");
    scanf("%d",&num1);

    printf("Informe o segundo número: ");
    scanf("%d",&num2);

    if(num1 == num2)
    {
        printf("Os dois números são iguais");
    }

    else if(num1 > num2)
    {
        printf("%d é maior que %d", num1,num2);
    }

    else if(num2 > num1)
    {
        printf("%d é maior que %d", num2,num1);
    }

    return 0;
}
