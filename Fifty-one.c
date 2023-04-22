/******************************************************************************
7. Faça um programa que realize a leitura dos seguintes dados relativos a um conjunto de
alunos: Matricula, Nome, Código da Disciplina, Nota1 e Nota2. Considere uma turma de
até 5 alunos. Após ler todos os dados digitados, e depois de armazená-los em um vetor
de estrutura, exibir na tela a listagem final dos alunos com as suas respectivas médias
finais (considere a média sendo a média aritmética).
*******************************************************************************/
#include <stdio.h>

int main(){
    
    struct dados{
        int matricula, codD;
        char nome[20];
        float nota1, nota2, media;
    }alunos[5];
    
    for(int i= 0; i<5; i++){
        printf("Informe o nome do aluno : ");
        scanf("%s", alunos[i].nome);
        printf("Informe a matricula do aluno : ");
        scanf("%d", &alunos[i].matricula);
        printf("Informe o codigo da Disciplina : ");
        scanf("%d", &alunos[i].codD);
        printf("Informe a nota 1 do aluno : ");
        scanf("%f", &alunos[i].nota1);
         printf("Informe a nota 2 do aluno : ");
        scanf("%f", &alunos[i].nota2);
        alunos[i].media = (alunos[i].nota1 + alunos[i].nota2) / 2;
    }
    
    for (int i = 0; i<5; i++){
        printf("O aluno %s teve a media %.2f \n", alunos[i].nome, alunos[i].media);
    }
    
    return 0;
}
