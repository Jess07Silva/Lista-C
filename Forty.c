/******************************************************************************
1o) Faça um programa que leia dois valores inteiros e chame uma função que receba estes
2 valores de entrada e retorne o maior valor na primeira variável e o menor valor na
segunda variável. Escreva o conteúdo das 2 variáveis na tela.

*******************************************************************************/
#include <stdio.h>

    void valor(int a, int b){
        int maior, menor;
        
        if(a>b){
            maior = a;
            menor = b;
        }
        else{
            maior = b;
            menor = b;
        }
        printf("O maior valor é : %d  \n", maior);
        printf("O menor valor é : %d", menor);
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
