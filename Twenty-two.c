/*22. Faça um programa que leia um numero inteiro “N” e depois imprima os N
primeiros números naturais ímpares.*/

#include <stdio.h>

int main()
{
    int N, contador;
    
    printf("Informe o numero : ");
    scanf ("%d", &N);
    
    while (contador<5){
        contador ++;
        N = N +2;
        printf("O %d numero natural impar do numero digitado é : %d \n", contador, N);
    }
     return 0;
}

