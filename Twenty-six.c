/******************************************************************************
3. Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int A [10] = {2, 3, 6, 8, 7, 13, 12, 11, 10, 4};
    int AP[10];
    int i, par;
    
    /*Imprimindo os valores*/
    do{
        if (A[i] % 2 == 0){
            par++;
            AP[i] = A[i];
        }
    }while (i<10);
    
    printf ("A quantidade de valores pares foi : %d", par);
    printf ("Os valores pares sao : ");
    
    i = 0;
    do{
        printf("%d valor : %d \n", i, AP[i]);
        i++;
    }while (i<10);

    return 0;
}

