/******************************************************************************
3. Escreva um trecho de código para fazer a criação dos novos tipos de dados conforme
solicitado abaixo:
Horário: composto de hora, minutos e segundos.
Data: composto de dia, mês e ano.
Compromisso: composto de uma data, horário e texto que descreve o compromisso.
*******************************************************************************/
#include <stdio.h>

int main(){
    
    struct horario{
        int hora, minutos, segundos;
    };
    
    struct data{
        int dia, mes, ano;
    };
    
    struct compromisso{
        struct horario h1;
        struct data d1;
        char texto[100];
    }c1;
    
    
    printf("Informe a hora, minutos e segundos do compromisso :");
    scanf("%d\n%d\n%d", &c1.h1.hora, &c1.h1.minutos, &c1.h1.segundos);
    
    printf("Informe o dia, o mes e o ano do compromisso :");
    scanf("%d\n%d\n%d", &c1.d1.dia, &c1.d1.mes, &c1.d1.ano);
    
    printf("Descreva o compromisso : ");
    scanf("%s", c1.texto);
    
    printf("Data do compromisso : %d/%d/%d \n", c1.d1.dia, c1.d1.mes, c1.d1.ano);
    printf("Horario do compromisso : %d:%d:%d \n", c1.h1.hora, c1.h1.minutos, c1.h1.segundos);
    printf("Descrição do compromisso : %s", c1.texto);
    
    
    return 0;
}
