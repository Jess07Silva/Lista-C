/*24. Faça um programa que leia um numero inteiro positivo “N” e imprima
todos os números naturais de 0 até N em ordem decrescente.*/

#include <stdio.h>

int main()
{
    int N, contador;
    
    printf("Informe o numero : ");
    scanf ("%d", &N);
    
    if (N > 0){
        contador = N;
        while (contador >0){
        contador --;
        printf("Os numeros naturais de 0 ate o numero informado de forma decrescente sao : %d \n", contador);
        }
    }
    else {
        printf ("Informe um numero positivo!");
    }
     return 0;
}

