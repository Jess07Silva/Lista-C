/******************************************************************************
6o) Considere a seguinte declaração: int A, *B, **C, ***D; Escreva um programa que leia a
variável a e calcule e exiba o dobro, o triplo e o quádruplo desse valor utilizando apenas os
ponteiros B, C e D. O ponteiro B deve ser usada para calcular o dobro, C o triplo e D o
quádruplo.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int A;
    int *B;
    int *C;
    int *D;
    
    A = 13;
    
    B = &A;
    C = &A;
    D = &A;

    printf("O dobro de A é : %d \n",*B * 2);
    printf("O triplo de A é : %d \n",*C *3);
    printf("O quadruplo de A é : %d \n", *D *4);
    
    return 0;
}
