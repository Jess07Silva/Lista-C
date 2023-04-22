/******************************************************************************
1. Implemente um programa que registra o nome, matrícula, endereço e as 5 disciplinas de um
aluno. Armazene estes dados em uma estrutura.
Nome: Carlos Saraiva
Matrícula: 123456
Endereço: Rua do Futuro, 113 – Recife.
Disciplinas: Matemática, Português, Geografia, Física e Biologia.
*******************************************************************************/
#include <stdio.h>

int main()
{
    struct disciplinas{
     char mat1[20];
     char mat2[20];
     char mat3[20];
     char mat4[20];
     char mat5[20];
    };
    
    struct aluno{
        char nome [20];
        char endereço[50];
        int matricula;
        struct disciplinas materia;
    }aluno = {"Taylor", "Rua Cornelia Street, 13", 121389, {"Matemática", "Português", "Geografia", "Física", "Biologia"}};

    printf("Nome do aluno : %s \n", aluno.nome);
    printf("Matricula : %d \n", aluno.matricula);
    printf("Endereço : %s \n", aluno.endereço);
    printf("Materias : %s, %s, %s, %s e %s \n", aluno.materia.mat1, aluno.materia.mat2, 
    aluno.materia.mat3, aluno.materia.mat4, aluno.materia.mat5);
    
    return 0;
}
