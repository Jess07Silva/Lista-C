/*17. Leia a distância em Km e a quantidade de litros de gasolina consumidos
por um carro em um percurso, calcule o consumo em Km/l e escreva uma
mensagem de acordo com a tabela abaixo:
Consumo < 8 km\l venda o carro || Consumo entre 8 a 12 km\l economico || Consumo > 12 Super economico*/

#include <stdio.h>

int main()
{
    float distancia, ql, consumo;
    
    /*coletando as informações necessarias*/
    
    printf("Informe a distancia percorrida : ");
    scanf("%f", &distancia);
    
    printf ("Informe a quantidade de litros de gasolina consumidos : ");
    scanf ("%f", &ql);
    
    /*fazendo os calculos e imprimindo*/
    
    consumo = distancia/ql;
    
    if (consumo < 8){
        printf ("O consumo foi %.1f km\\l \nVenda o carro!", consumo);
    }
    
    else if (consumo >= 8 && consumo <= 12){
        printf ("O consumo foi %.1f km\\l \n Carro economico!", consumo);
    }
    
    else if (consumo > 12){
        printf ("O consumo foi %.1f km\\l \n Carro super economico!", consumo);
    }
     return 0;
}
