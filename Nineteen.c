/*19. Faça um programa que peça ao usuário para digitar 10 valores e some-os
e imprima o resultado.*/

#include <stdio.h>

int main()
{
    int pergunta, valor, soma;
    
    /*fazendo os calculos e imprimindo*/
    
    for (pergunta =1; pergunta <=10; pergunta++){
        printf("Digite o valor : ");
        scanf ("%d", &valor);
        soma = soma + valor;
    }
    
    printf ("A soma total foi %d", soma);
     return 0;
}
