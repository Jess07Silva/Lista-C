/******************************************************************************
2o) Elaborar um programa que leia dois valores inteiros (A e B). Em seguida faça uma
função que retorne a soma do dobro dos dois números lidos. A função deverá armazenar o
dobro de A na própria variável A e o dobro de B na própria variável B.
*******************************************************************************/
#include <stdio.h>

    void valor(int a, int b){
        int soma;
        
        a = a * 2;
        b = b * 2;
        soma = a + b;
        
        printf("A soma dos valores é : %d  \n", soma);
    }

int main()
{
    int a,b;
    
    printf("Informe o primeiro valor : ");
    scanf("%d", &a);
    
    printf("Informe o segundo valor : ");
    scanf("%d", &b);
    
    valor(a,b);
    return 0;
}
