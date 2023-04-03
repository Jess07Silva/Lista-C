/******************************************************************************
5. Gerar e imprimir uma matriz de tamanho 10 x 10, onde seus elementos são da forma:
A[i][j] = 2i + 7j - 2 se i < j;
A[i][j] = 3i² + 1 se i = j;
A[i][j] = 4i³ + 5j² + 1 se i > j:
*******************************************************************************/
#include <stdio.h>

int main()
{
    int A[10][10] = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}};
    int i, j;

        for(i=0; i<10; i++){
        for(j=0; j<10; j++){            
            if(i<j){
                A[i][j] = 2* i + 7* j - 2;
            }
            
            else if(i==j){
                A[i][j] = (3 * i + 3 * i) + 1;
            }
            
            else if (i>j){
                A[i][j] = (4* i + 4* i + 4* i) + (5 * j + 5* j) + 1;
            }
        }
    }
    
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
        printf("%d ", A[i][j]);
        }
        printf("\n");
    }   
    return 0;
}
