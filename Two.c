/*2. Peça ao usuário para digitar três valores inteiros e imprima a soma deles.*/

#include <stdio.h>

int main()
{
    int n1, n2, n3;
    
    printf ("Digite o primeiro numero :\n");
    scanf ("%d", &n1);
    
    printf ("Digite o segundo numero :\n");
    scanf ("%d", &n2);
    
    printf ("Digite o terceiro numero :\n");
    scanf ("%d", &n3);
    
    printf ("A soma dos numero resulta em = %d", n1 + n2 + n3);
     return 0;
}
