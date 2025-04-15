//Questão 31 PUCRS

#include <stdio.h>

int main(){
    
    int input, contador, contador_intervalo = 0, contador_nao_intervalo = 0;
    
    printf("Informe 10 valores inteiros: \n");

    for(contador = 1; contador <= 10; contador++){
        scanf("%d", &input);
        if(input >= 10 && input <= 20){
            contador_intervalo++;
        }
        else{
            contador_nao_intervalo++;
        }
    }
        printf("A quantidade de valores dentro do intervalo é: %d \n", contador_intervalo);
        printf("A quantidade de valores fora do intervalo é: %d \n", contador_nao_intervalo);

    return 0;
}

