//Questão 18 IFSC

#include <stdio.h>

int main()
{
    int comprimento, largura, altura, volume;

    printf("Calcule o volume de uma caixa retangular: \n");
    
    printf("Informe o comprimento: ");
    scanf("%d", &comprimento);
    
    printf("Informe a largura: ");
    scanf("%d", &largura);
    
    printf("Informe altura: ");
    scanf("%d", &altura);
    
    volume = comprimento * largura * altura;
    printf("O volume da caixa é: %d", volume);
    
    return 0;
}