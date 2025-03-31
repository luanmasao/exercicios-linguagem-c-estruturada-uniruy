//Questão 37 IFSC

#include <stdio.h>

int main()
{
    int idade,meses,dias;

    printf("Informe a idade em anos: ");
    scanf("%d",&idade);

    meses = 12 * idade;
    dias = meses * 30;

    printf("A idade em dias é: %d", dias);

    return 0;
}