/******************************************************************************
3. Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int A [10] = {2, 3, 6, 8, 7, 13, 12, 11, 10, 4};
    int i, par;
    
    /*Imprimindo os valores*/
    do{
        if (A[i] % 2 == 0){
            par++;
        }
        i++;
    }while (i<10);
    
    printf ("A quantidade de valores pares foi : %d", par);
    return 0;
}
