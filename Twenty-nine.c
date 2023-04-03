/******************************************************************************
5. Faça um programa para ler a nota da prova de 10 alunos e armazene num vetor, calcule
e imprima a média geral (considere a média aritmética).
*******************************************************************************/
#include <stdio.h>

int main()
{
    float A [10];
    int i;
    float media, soma;
    
    /*Recebendo os valores*/
    for (i=0; i<10; i++){
        printf ("Informe a media do aluno : ");
        scanf("%f", &A[i]);
    }
    
    /*Calculando e imprimindo*/
    i = 0;
    for (i = 0; i<10; i++){
        soma = soma + A[i];
        }
    media = soma/10;
    
    printf ("A media geral foi %.2f", media);
    return 0;
}
