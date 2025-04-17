//Questão 27 PUCRS

 #include <stdio.h>

 int main()
 {
     int contador_input = 0, input, soma = 0, menor_valor = 2147483647, maior_valor = -1;
     float media;
     
     printf("Informe 500 valores, inteiros e positivos: \n");
     
     while(contador_input<500)
     {
        scanf("%d", &input);
        
        if (input <= 0)
        {
            printf("Não insira valores negativos! \n");
            continue; 
        }

        soma += input;
        contador_input++;
       
        if(input > maior_valor)
        {
            maior_valor = input;
        }
        else if(input < menor_valor)
        {
             menor_valor = input; 
        }
     }
 
     printf("Maior valor: %d\n", maior_valor);
     printf("Menor valor: %d\n", menor_valor);
     
     media = (float)soma / contador_input;
 
     printf("Média: %f", media);
 
     return 0;
     
 }
 
