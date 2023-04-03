/******************************************************************************
8. Faça um vetor de tamanho 10 preenchido com o seguinte valor: (i+ 5 * i) / (i+1), sendo
i a posição do elemento no vetor. Em seguida imprima o vetor na tela.
*******************************************************************************/
#include <stdio.h>

int main()
{
    float A [10];
    int i;
    float cont;
    /*Recebendo os valores*/
    for (i=0; i<10; i++){
        cont = (i+ 5 * i)/(i+1);
        A[i] = cont;
        printf("O valor é : %.1f \n", A[i]);
    }
    return 0;
}
