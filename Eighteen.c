/*18. Escreva um programa que escreva na tela, de 1 até 100, de 1 em 1, 3
vezes. A primeira vez deve usar a estrutura de repetição “for”, a segunda
vez a estrutura “while” e a terceira usando a estrutura “do while”.*/

#include <stdio.h>

int main()
{
    int contador;
    
    /*fazendo os calculos e imprimindo*/
    
    for (contador =1; contador <=100; contador++){
        printf("%d \n", contador);
    }
    
    printf ("Fim do for \n");
    
    contador = 0;
    while (contador <100){
        contador ++;
        printf("%d \n", contador);
    }
    
    printf ("Fim do while \n");
    contador = 1;
    
    do{
        printf("%d \n", contador);
        contador++;
    }while (contador<= 100);
    
    printf ("Fim do do-while");
    
     return 0;
}
