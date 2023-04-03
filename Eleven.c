/* 11. Faça um programa que receba um número inteiro e verifique seestenúmero é par ou ímpar, positivo ou negativo.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    
    /*Recebendo o valor : */
    printf("Digite o numero : ");
    scanf("%d", &num);
    
    /*Calcundo e imprimindo : */
    
    if (num > 0 && num % 2 == 0) {
        printf("O numero %d é positivo e par \n", num);
    }
        
    else if (num > 0 && num % 2 != 0){
        printf("O numero %d é positivo e impar \n", num);
    }
    
    else if (num < 0  && num % 2 == 0) {
        printf("O numero %d é negativo e par", num);
    }
    
    else if (num < 0  && num % 2 != 0) {
        printf("O numero %d é negativo e impar", num);
    }
    
    else if (num == 0 ) {
        printf("O numero digitado é zero");
    }
     return 0;
}
