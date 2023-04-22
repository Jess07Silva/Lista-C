/******************************************************************************
5. Refaça a questão anterior de modo que os vetores sejam genéricos oferecidos pelo usuário
através do teclado e o programa deve apresentar o resultado.
*******************************************************************************/
#include <stdio.h>

int main(){
    
    struct vetores{
        float x, y, z;
    }vet1, vet2;
    
    printf("Informe os valores do Vetor 1 : ");
    scanf("%f %f %f", &vet1.x, &vet1.y, &vet1.z);
    printf("Informe os valores do Vetor 2 : ");
    scanf("%f %f %f", &vet2.x, &vet2.y, &vet2.z);
    
   printf("A soma dos dois vetores resulta em : %.2f, %.2f, %.2f", vet1.x + vet2.x, vet1.y + vet2.y, vet1.z +vet2.z);
    
    return 0;
}
