/******************************************************************************
4. Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Imprima
o vetor, o maior elemento e a posição que ele se encontra.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int A [10];
    int i, maior, posicao;
    
    /*Recebendo os valores*/
    for (i=0; i<10; i++){
        printf ("Informe o valor : ");
        scanf("%d", &A[i]);
    }
    
    /*Calculando e imprimindo*/
    i = 0;
    for (i = 0; i<10; i++){
        if (maior < A[i]){
            maior = A[i];
            posicao = i;
        }
        else {
            maior = maior;
        }
    }
    
    printf ("O maior valor foi %d da posicao %d", maior, posicao);
    return 0;
}
