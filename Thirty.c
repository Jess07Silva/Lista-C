/******************************************************************************
6. Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Imprima
o vetor, o menor elemento e a posição que ele se encontra.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int A [10];
    int i, menor, posicao;
    
    /*Recebendo os valores*/
    for (i=0; i<10; i++){
        printf ("Informe o valor : ");
        scanf("%d", &A[i]);
    }
    
    /*Calculando e imprimindo*/
    i = 0;
    for (i = 0; i<10; i++){
        if (menor > A[i]){
            menor = A[i];
            posicao = i;
        }
        else {
            menor = menor;
        }
    }
    
    printf ("O menor valor foi %d da posicao %d", menor, posicao);
    return 0;
}
