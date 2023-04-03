/******************************************************************************
10. Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros números
naturais que não são múltiplos de 5.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int Num [101];
    int i;
    
    for (i=0; i<=100; i++){
        if (i % 5 != 0){
        Num[i] = i;
        printf("O %d numero natural não multiplo de 5 é : %d \n", i, Num[i]);
        }
    }
    return 0;
}
