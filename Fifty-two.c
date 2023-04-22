/******************************************************************************
8. Faça um programa que armazene em um registro de dados (estrutura composta) os dados
de um funcionário de uma empresa, compostos de: Nome, Idade, Sexo (M/F), CPF,
Data de Nascimento, Código do Setor onde trabalha (0-99), Cargo que ocupa (string de
até 30 caracteres) e Salário. Os dados devem ser digitados pelo usuário, armazenados
na estrutura e exibidos na tela.
*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main(){
    
    struct dados{
        char nome[20];
        int idade;
        char sexo;
        char DN[12];
        char CPF [20];
        int codS;
        char cargo[30];
        float salario;
    }funcionario;
    
    //Coletar os dados
    
    printf("Informe os dados do funcionario : \n");
    printf("Nome : ");
    fgets(funcionario.nome, 20, stdin);
    funcionario.nome[strcspn(funcionario.nome, "\n")] = '\0';
    printf("Idade : ");
    scanf("%d", &funcionario.idade);
    getchar();
    printf("Sexo (M ou F) : ");
    scanf("%c", &funcionario.sexo);
    getchar();
    printf("CPF : ");
    fgets(funcionario.CPF, 20, stdin);
    funcionario.CPF[strcspn(funcionario.CPF, "\n")] = '\0';
    printf("Data de Nascimento : ");
    fgets(funcionario.DN, 12, stdin);
    funcionario.DN[strcspn(funcionario.DN, "\n")] = '\0';
    printf("Codigo setor (0-99) : ");
    scanf("%d", &funcionario.codS);
    getchar();
    printf("Cargo : ");
    fgets(funcionario.cargo, 30, stdin);
    funcionario.cargo[strcspn(funcionario.cargo, "\n")] = '\0';
    printf("Salario : ");
    scanf("%f", &funcionario.salario);
    getchar();
    
    //Imprimir os dados
    
    printf("\nDADOS DO FUNCIONARIO \n");
    printf("Nome : %s \n", funcionario.nome);
    printf("Idade : %d \n", funcionario.idade);
    printf("Data de nascimento : %s \n", funcionario.DN);
    printf("Sexo : %c \n", funcionario.sexo);
    printf("Cargo : %s \n", funcionario.cargo);
    printf("Salario : %.2f \n", funcionario.salario);
    printf("CPF : %s \n", funcionario.CPF);
    printf("Codigo de setor : %d \n", funcionario.codS);
    
    return 0;
}
