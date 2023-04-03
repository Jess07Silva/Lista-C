/*13. Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, 
utilizando as seguintes fórmulas (onde h corresponde à altura): - Homens: (72.7*h) − 58
- Mulheres: (62, 1*h) − 44, 7*/

#include <stdio.h>

int main()
{
    char sexo;
    float h;
    
    /*Recebendo o valor : */
    printf("Digite o sexo da pessoa\nF - Feminino M - Masculino ? ");
    scanf("%c", &sexo);
    
    printf("Digite a altura da pessoa : ");
    scanf("%f", &h);
    
    /*Calcundo e imprimindo : */
    
    if (sexo == 'F') {
        printf("O peso ideal é : %.2f", 62.1 * h - 44.7);
    }
        
    else if (sexo == 'M') {
        printf("O peso ideal é : %.2f", 72.7 * h - 58);
    }
     return 0;
}
