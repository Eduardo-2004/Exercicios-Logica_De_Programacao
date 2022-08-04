//38. Chama-se ano bissexto o ano ao qual � acrescentado um dia extra, ficando ele com 366
//dias, um dia a mais do que os anos normais de 365 dias, ocorrendo a cada quatro anos.
//Escreva um programa que verifique se um ano � bissexto. Um ano � bissexto se ele �
//divis�vel por 4. Entretanto, se o ano � divis�vel por 100, ele n�o � bissexto. Mas, se ele for
//divis�vel por 400, ele volta a ser bissexto.
//a. S�o bissextos os anos: 1600, 1996, 2000, 2004, 2008, 2012, 2016, 2400, 2800, ...
//b. N�o s�o bissextos: 1500, 1974, 1982, 1983, 1990, 2018, 2022, 2030, 2038, ...

#include <stdio.h>

int main()
{
    int ano;
    printf("Ano: ");
    scanf("%i", &ano);
    
    if( ((ano % 4) == 0) || ((ano % 400) == 0) && ((ano % 100) != 0) )  {
        
        
        printf("Esse ano é bissexto!");
        
    } else{
        
        printf("Esse ano não é bissexto!");
        
        
    }
    
    
    return 0;
}
