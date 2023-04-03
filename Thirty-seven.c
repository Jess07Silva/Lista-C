/******************************************************************************
3. Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão na diagonal principal.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float Matriz [3][3];
    int i, j;
    float soma;

    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
        printf("Informe o valor : ");
        scanf("%f", &Matriz[i][j]);
        }
    }
    
    soma = Matriz[0][0] + Matriz[1][1] + Matriz[2][2];
    
    printf("O resultado da soma foi : %.2f", soma);
    
    return 0;
}
