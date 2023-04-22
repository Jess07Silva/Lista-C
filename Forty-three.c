/******************************************************************************
4o) Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas.
Imprima o endereço de cada posição dessa matriz.
*******************************************************************************/
#include <stdio.h>
    
int main(){
    int a,b;
    float matriz[3][3];
    
    for(int i=0;i<3;i++){
        for(int j= 0; j<3; j++){
             printf("%p \t", &matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
