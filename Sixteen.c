/*16. Leia a idade e o tempo de serviço de um trabalhador e escreva se ele
pode ou não se aposentar. As condições para aposentadoria são:
- Ter pelo menos 65 anos,
- Ou ter trabalhado pelo menos 30 anos,
- Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.*/

#include <stdio.h>

int main()
{
    int idade, temp;
    
    /*coletando as informações necessarias*/
    
    printf("Informe sua idade : ");
    scanf("%d", &idade);
    
    printf ("Informe seu tempo de trabalho : ");
    scanf ("%d", &temp);
    
    /*fazendo os calculos e imprimindo*/
    
    if (idade >= 65  || temp >= 30 || idade >= 60 && temp >= 25){
        printf ("Voce PODE se aposentar!");
    }
    
    else {
        printf ("Infelizmente ainda não é possivel a aposentadoria!");
    }
     return 0;
}
