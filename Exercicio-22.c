/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

//22. Escreva um programa que leia um número e exiba o seu módulo.

int main()
{
    int num, modulo;
    
    printf("Digite um numero para saber o seu módulo: ");
    scanf("%d", &num);
    
    if(num < 0) {
        
        printf("[%d]",num * -1);
        
    } 
    else(num >= 0); {
        
        printf("[%d]",num);
        
    }

    return 0;
}
