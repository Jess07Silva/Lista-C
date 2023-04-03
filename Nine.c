/*A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso. 
Sendo que da quantia total: - O primeiro ganhador receberá 46%; - O segundo receberá 32%; 
- O terceiro receberá o restante;
Calcule e imprima a quantia ganha por cada um dos ganhadores.*/

#include <stdio.h>

int main()
{
    float valor = 780.000;
    
    /*Calcundo e imprimindo : */
    
    printf ("O primeiro ganhador receberá %.3f mil reais \n", 0.46*valor);
    printf ("O segundo ganhador receberá %.3f mil reais \n", 0.32*valor);
    printf ("O terceiro ganhador receberá %.3f mil reais", 0.22*valor);
    return 0;
}
