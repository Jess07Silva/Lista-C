/******************************************************************************
4. Considerando a estrutura
struct Vetor{
float x;
float y;
float z;
};
para representar um vetor no R3, implemente um programa que calcule a soma de dois
vetores e armazena estas informações em uma estrutura. Os vetores são (1, 2, 3) e (0, 5, 10).
*******************************************************************************/
#include <stdio.h>

int main(){
    
    struct vetores{
        float x, y, z;
    }vet1, vet2;
    
   vet1.x = 1;
   vet1.y = 2;
   vet1.z = 3;
   
   vet2.x = 0;
   vet2.y = 5;
   vet2.z = 10;
   
   printf("A soma dos dois vetores resulta em : %.2f, %.2f, %.2f", vet1.x + vet2.x, vet1.y + vet2.y, vet1.z +vet2.z);
    
    return 0;
}
