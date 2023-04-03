/*20. Faça um programa que leia 10 inteiros e imprima sua media.*/

#include <stdio.h>

int main()
{
    int pergunta, valor, soma, media;
    
    /*fazendo os calculos e imprimindo*/
    
    for (pergunta =1; pergunta <=10; pergunta++){
        printf("Digite o valor : ");
        scanf ("%d", &valor);
        soma = soma + valor;
    }
    media = soma/10;
    printf ("A media dos valores é : %d", media);
     return 0;
}
