/*21. Faça um programa que leia 10 inteiros positivos, ignorando não positivos,
e imprima sua média.*/

#include <stdio.h>

int main()
{
    int pergunta, valor, soma, media;
    
    for (pergunta =1; pergunta <=10; pergunta++){
        printf("Digite o valor : ");
        scanf ("%d", &valor);
        if (valor > 0){
            soma = soma + valor;
        }
        else {
            soma = soma;
        }
    }
    media = soma/10;
    printf ("A media dos valores é : %d", media);
     return 0;
}
