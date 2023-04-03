/******************************************************************************
4. Crie um programa que leia uma matriz 2x2 e calcule a sua determinante.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float Matriz [2][2];
    int i, j;
    float determinante;

    for (i=0; i<2; i++){
        for (j=0; j<2; j++){
        printf("Informe o valor : ");
        scanf("%f", &Matriz[i][j]);
        }
    }
    
    determinante = Matriz[0][0] * Matriz[1][1] - Matriz[0][1] * Matriz [1] [0];
    
    printf("O determinante da matriz é : %.2f", determinante);
    
    return 0;
}
