/*3. Desenvolva um algoritmo em C que leia um número inteiro e imprima o seu antecessor e seu sucessor.*/

#include <stdio.h>

int main()
{
    int numero = 13;
    
    printf ("O numero é : %d \n", numero);
    printf ("O antecessor desse numero é : %d \n", --numero);
    numero ++;
    printf ("O sucessor desse numero é : %d \n", ++numero);
     return 0;
}
