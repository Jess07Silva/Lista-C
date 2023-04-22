/******************************************************************************
3o) Crie um programa que contenha um array de float contendo 10 elementos. Imprima o
endereço de cada posição desse array.
*******************************************************************************/
#include <stdio.h>
    
int main(){
    int a,b;
    float vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    for(int i=0;i<10;i++){
        printf("%p \n", &vetor[i]);
    }
    
    return 0;
}
