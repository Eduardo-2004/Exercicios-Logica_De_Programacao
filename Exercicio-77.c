/*****************************************************************************************************************/

#include <stdio.h>

// Escreva um programa em C, que leia uma string, gere uma nova string com o texto invertido e imprima esta nova string


int main()
{
    char str[20];
    char c;
    
    printf("Digite uma palavra: ");
    scanf("%s", &str);
    
    
    int i, tam = strlen(str);
    
    for(i=0; i<tam/2; i++){
        
        c = str[i];
        str[i] = str[tam-1-i];
        str[tam-1-i] = c;
        
    }
    
    printf("str = %s\n",str);
    

    return 0;
}
