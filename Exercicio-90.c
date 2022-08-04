

//90. Escreva um programa em C, que dado uma string, crie uma nova string contendo na
//ordem em que aparecem no string dado, as vogais no come�o e as consoantes no final.

#include <stdio.h>
#include <ctype.h> //contém declarações para manipulação de caracteres. Usada quando se trabalha diferentes idiomas e alfabetos.
#include <stdlib.h>
#include <string.h>
int main()
{
    char frase[30],vogal[30],consoante[50];
    
    int j,tam,v=-1,c=-1;
    
    printf("Digite a frase: %s", frase);
    
    fflush(stdin);
    
    gets(frase);
    
    tam=strlen(frase);
    
    for(j = 0; j < tam; j++)
    {
        if(toupper(frase[j])=='A'||toupper(frase[j])=='E'||
           toupper(frase[j])=='I'||toupper(frase[j])=='O'||
           toupper(frase[j])=='U')
        {
            vogal[v++]=frase[j];
        }
        else{
            consoante[c++]=frase[j];
        }
    }
    vogal[v++]='\0';
    consoante[c++]='\0';

    // printf("\nimprimindo todas as vogais: ");
    for(v=-1; v < tam; v++)
    {
        if(vogal[v]=='\0')break;
        printf("%c",vogal[v]);
        
    }
    // printf("\nimprimindo todas as consoantes: ");
    for(c=-1; c < tam; c++)
    {
         if(consoante[c]=='\0')break;
        printf("%c",consoante[c]);

    }
    
    printf("\n\n");
    getchar();
    return 0;
}
