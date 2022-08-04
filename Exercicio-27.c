#include <stdio.h>

// 27. Escreva um programa que leia 3 n�meros e calcule a m�dia ponderada entre eles.
// Considere que o maior n�mero recebe peso 5 e os outros dois recebem peso 2,5. 

int main()
{
    float P1,P2,P3,num1, num2,num3,MP;
    
    printf("Digite o maior número:");
    scanf("%f", &num1);
    
    printf("Digite o segundo número:");
    scanf("%f", &num2);
    
    printf("Digite o terceiro número:");
    scanf("%f", &num3);
    
    P1 = 5;
    P2 = 2.5;
    P3 = 2.5;
    
    
    if(num1 > num2 && num1 > num3){
    MP =((num1 * P1) + (num2 * P2) + (num3 * P3)) / (P1 + P2 + P3);
    
    printf("\nMédia Ponderada: %.2f ",MP);
    } else{
        
        printf("\n**É necessário que o primeiro número seja o maior!**");    
        
    }
    
    

    return 0;
}
