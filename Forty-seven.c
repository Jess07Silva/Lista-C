/******************************************************************************
2. Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e
armazene os dados em uma estrutura. Estas informações devem ser lidas do teclado.
*******************************************************************************/
#include <stdio.h>

int main(){
    
    struct dados{
        char nome [20];
        char endereço[50];
        int idade;
    }pessoa;
    
    printf("Informe o seu nome : \n");
    scanf("%s", pessoa.nome);
    printf("Informe o seu endereço :\n");
    scanf("%s", pessoa.endereço);
    printf("Informe a sua idade : \n");
    scanf("%d", &pessoa.idade);
    
    return 0;
}
