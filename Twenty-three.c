/*23. Faça um programa que leia um numero inteiro positivo “N” e imprima
todos os números naturais de 0 até “N” em ordem crescente.*/

#include <stdio.h>

int main()
{
    int N, contador;
    
    printf("Informe o numero : ");
    scanf ("%d", &N);
    
    if (N > 0){
        while (contador<N){
        printf("Os numero naturais até o numero digitado sao: %d \n", contador);
        contador ++;
    }
    }
    
    else {
        printf ("Informe um numero positivo!");
    }
     return 0;
}

