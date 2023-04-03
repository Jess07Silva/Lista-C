/* 12. Faça um programa que leia 2 notas de um aluno,
verifique se as notas são válidas e exiba na tela a média destas notas. 
Uma nota válida deve ser, obrigatoriamente, um valor entre 0.0 e 10.0, onde caso a nota não possuaum valor válido,
este fato deve ser informado ao usuário e o programa termina.*/

#include <stdio.h>

int main()
{
    float n1, n2;
    
    /*Recebendo o valor : */
    printf("Digite a primeira nota : ");
    scanf("%f", &n1);
    
    printf("Digite a primeira nota : ");
    scanf("%f", &n2);
    
    /*Calcundo e imprimindo : */
    
    if (n1 >= 0 && n1 <= 10 && n2 >= 0 && n2 <= 10 ) {
        printf("A media do aluno é : %.2f", (n1+n2)/2);
    }
        
    else{
        printf("A nota informada não é valida!");
    }
     return 0;
}
