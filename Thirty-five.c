/******************************************************************************
1. Crie duas matrizes 2x2 que será preenchida pelo usuário e por fim imprima o
resultado.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int Num [2][2];
    int i,j;
    
    for (i=0; i<2; i++){
        for (j=0; j<2; j++){
        printf("Informe o valor : ");
        scanf("%d", &Num[i][j]);
        }
    }
    
    for(i=0; i<2; i++){
        for (j=0; j<2; j++){
        printf ("O valor é : %d \n",Num[i][j]);
        }
    }
    return 0;
}
    

