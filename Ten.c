/* 10. Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre: 
- O número digitado ao quadrado
- A raiz quadrada do número digitado*/

#include <stdio.h>
#include <math.h>

int main()
{
    float num;
    
    /*Recebendo o valor : */
    printf("Digite o numero : ");
    scanf("%f", &num);
    
    /*Calcundo e imprimindo : */
    
    if (num > 0) {
        printf("O numero digitado é positivo \n");
        printf("O quadrado desse numero é : %.2f \n", num * num);
        printf("A raiz quadrada desse numero é : %.2f \n", sqrt(num));
    }
        
    else if (num < 0) {
        printf("O numero digitado é negativo");
    }
    
    else if (num == 0) {
        printf("O numero digitado é zero");
        return 0;
    }
     return 0;
}
