
//Escreva um programa em C, que verifique se duas strings s�o iguais, independente da
//caixa das letras. Por exemplo, este programa deve dizer que �Teste�� igual a �TeStE�.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palavra1[50];
    char palavra2[50];
    
    printf("Digite uma palavra:");
    scanf("%s", &palavra1);
    
    printf("\nDigite uma palavra:");
    scanf("%s", &palavra2);
    
    
    if(strcmp(palavra1, palavra2) == 0 ){
       
      printf("%s � igual a %s", palavra1, palavra2);  
        
    } else{
        
        printf("%s � diferente de %s", palavra1, palavra2);  
        
        
    }
    //printf("\n\nResultado: %d", strcmp(palavra1, palavra2));
    

    return 0;
}

