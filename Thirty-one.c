/******************************************************************************
6. Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Imprima
o vetor, o menor elemento e a posição que ele se encontra.
*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    int A [10];
    int i;
    float dp, soma, rq, media;
    float AA, AB, AC, AM;
    
    /*Recebendo os valores*/
    for (i=0; i<10; i++){
        printf ("Informe o valor : ");
        scanf("%d", &A[i]);
        soma = soma + A[i];
    }
    media = soma/10;
    /*Calculando e imprimindo*/
    i = 0;
    for (i=0; i<10; i++){
        AA = A[i] - media;
        AB = pow(AA, 2);
        AC = AB/10;
        AM = AM + AC;
    }
    
    rq = sqrt(AM);
    printf ("O resultado do desvio padrao é : %f", rq);
    return 0;
}
