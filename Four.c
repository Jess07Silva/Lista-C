/*4. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.*/

#include <stdio.h>

int main()
{
    float nc;
    
    printf ("Digite a temperatura em Celsius : ");
    scanf ("%f", &nc);
    float nf = nc * 1.8+32;
    printf ("A temperatura em Fahrenheit é : %.1f", nf);
    return 0;
}
