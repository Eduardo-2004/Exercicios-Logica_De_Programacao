#include <stdio.h>



int main(void)
{
    char palavras[] = "Vivem a vida, pois é necessário! ";
    
    for(int x = 0; palavras[x] != '\0'; x++)
    {
        while(palavras[x] == ' ')
        {
            for(int y = x; palavras[y] != '\0'; y++)
            {
                palavras[y] = palavras[y + 1];
            }
        }
    }
    printf("Frase: %s", palavras);
    getchar();
    return 0;
}
