/*6. Leia quatro notas, calcule a média aritmética e imprima o resultado*/

#include <stdio.h>

int main()
{
    float n1, n2, n3, n4;
    
    /*Recebendo as notas*/
    
    printf ("Digite a primeira nota : ");
    scanf ("%f", &n1);
    
     printf ("Digite a segunda nota : ");
    scanf ("%f", &n2);
    
     printf ("Digite a terceira nota : ");
    scanf ("%f", &n3);
    
     printf ("Digite a quarta nota : ");
    scanf ("%f", &n4);
    
    /*Calcundo a media  e imprimindo : */
    
    printf ("A media do aluno é : %.2f", (n1+n2+n3+n4)/4);
    return 0;
}
