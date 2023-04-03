/******************************************************************************
9. Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros números
naturais.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int Num [100];
    int i;
    /*Recebendo os valores*/
    for (i=0; i<=100; i++){
        Num[i] = i;
        printf("O %d numero natural é : %d \n", i, Num[i]);
    }
    return 0;
}
