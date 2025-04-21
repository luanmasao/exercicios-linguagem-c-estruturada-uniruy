//Questão 118 IFSC

#include <stdio.h>

int main()
{
    float altura_chico = 1.50, altura_ze = 1.10;
    int contador = 0;

    while(altura_ze < altura_chico)
    {   
        altura_chico += 0.02;
        altura_ze += 0.03;
        contador ++;
    }

    printf("%d anos \n", contador);
    
    return 0;
}