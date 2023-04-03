/*15. Faça um programa que faça 5 perguntas para uma pessoa sobre um
crime. As perguntas são:
- "Telefonou para a vítima?" - "Esteve no local do crime?" - "Mora perto da vítima?"
- "Devia para a vítima?" - "Já trabalhou com a vítima?"
O programa deve no final emitir uma classificação sobre a participação da
pessoa no crime. Se a pessoa responder positivamente a 2 questões ela deve
ser classificada como "Suspeita", entre 3 e 4 como "Cúmplice" e 5 como
"Assassino". Caso contrário, ele será classificado como "Inocente".*/

#include <stdio.h>

int main()
{
    char pergunta;
    int soma;
    
    printf("Telefonou para a vítima? S-SIM OU N-NÃO ");
    scanf("%c", &pergunta);
    
    if (pergunta == 'S'){
        soma++;
    }
    else if (pergunta == 'N'){
        soma = soma;
    }
    
    printf("Esteve no local do crime? S-SIM OU N-NÃO ");
    scanf("%c \n", &pergunta);
    
    if (pergunta == 'S'){
        soma++;
    }
    else if (pergunta == 'N'){
        soma = soma;
        
         return 0;
    }
    
    printf("Mora perto da vítima? S-SIM OU N-NÃO ");
    scanf("%c \n", &pergunta);
    
    if (pergunta == 'S'){
        soma++;
    }
    else if (pergunta == 'N'){
        soma = soma;
    }
    
    printf("Devia para a vítima? S-SIM OU N-NÃO ");
    scanf("%c \n", &pergunta);
    
    if (pergunta == 'S'){
        soma++;
    }
    else if (pergunta == 'N'){
        soma = soma;
    }
    
    printf("Já trabalhou com a vítima? S-SIM OU N-NÃO ");
    scanf("%c \n", &pergunta);
    
    if (pergunta == 'S'){
        ++soma;
    }
    else if (pergunta == 'N'){
        soma = soma;
    }
    
    if (soma < 2){
        printf ("Pessoa considerada INOCENTE!");
    }
    
    else if (soma == 2){
        printf ("Pessoa considerada SUSPEITA!");
    }
    
    else if (soma == 3 || soma == 4){
        printf ("Pessoa considerada CUMPLICE!");
    }
    
    else if (soma == 5){
        printf ("Pessoa considerada ASSASSINO!");
    }
}
