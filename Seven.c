/*7. Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor
correspondente em dólares.*/

#include <stdio.h>

int main()
{
    float real;
    float dolar = 5.21;
    
    /*Recebendo o valor*/
    
    printf ("Digite o valor em real : ");
    scanf ("%f", &real);
    
    /*Calcundo e imprimindo : */
    
    printf ("Esse valor em dolar é : %.2f", real/dolar);
     return 0;
}
