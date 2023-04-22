/******************************************************************************
5o) Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando
apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada valor
lido.
*******************************************************************************/
#include <stdio.h>
    
int main(){
   
    int vetor[5];
    
    for(int i=1;i<=5;i++){
        printf("Insira o %d valor : ", i);
        scanf("%d", &vetor[i]);
    }
    
    for(int i=1; i<=5; i++){
        printf("O dobro do %d valor é %d e o endereço é %p \n", i, vetor[i]*2, &vetor[i]);
    }
    return 0;
}
