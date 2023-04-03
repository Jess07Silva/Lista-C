/*8. Leia o valor do raio de um círculo e calcule e imprima a área do círculo correspondente.
A área do círculo é π*r², considere π = 3.141592.*/

#include <stdio.h>

int main()
{
    float raio;
    float pi = 3.141592;
    
    /*Recebendo o valor*/
    
    printf ("Digite o valor do raio : ");
    scanf ("%f", &raio);
    
    /*Calcundo e imprimindo : */
    
    printf ("A area do circulo é : %.2f", pi * raio * raio);
    
    return 0;
    
}
