/*14. A nota final de um estudante é calculada a partir de três notas atribuídas entre o intervalo de 0 até 10,
respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um exame final. 
A média das três notas mencionadas anteriormente obedece aos pesos: 
Trabalho de Laboratório: 2; Avaliação Semestral: 3; Exame Final: 5. De acordo como resultado, 
mostre na tela se o aluno está reprovado (média entre 0 e 2,9), de recuperação (entre 3 e 4,9) ou se foi aprovado. 
Faça todas as verificações necessárias*/

#include <stdio.h>

int main()
{
    float N1, N2, N3;
    
    /*Recebendo o valor : */
    printf("Digite a nota do trabalho de Laboratório : ");
    scanf("%f", &N1);
    
    printf("Digite a nota da Avaliação Semestral : ");
    scanf("%f", &N2);
    
    printf("Digite a nota do Exame Final : ");
    scanf("%f", &N3);
    
    /*Calcundo e imprimindo : */
    
    float media = (N1 * 2 + N2 * 3 + N3 * 5)/10;
    
    if (media <= 2.9) {
        printf ("Aluno teve a media %.2f e está REPROVADO!", media);
    }
    
     if (media >= 3 && media <= 4.9) {
        printf ("Aluno teve a media %.2f e está DE RECUPERAÇÃO!", media);
    }
    
     if (media > 5) {
        printf ("Aluno teve a media %.2f e está APROVADO!", media);
    }
     return 0;
}
