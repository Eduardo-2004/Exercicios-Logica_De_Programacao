#include <stdio.h>

//6. Ler dois números inteiros e exibir o quociente e o resto da divisão inteira entre eles

int main()
{
  int dividendo, divisor, quociente, resto;
    
    printf("\n Digite o dividendo: ");
    scanf("%d", &dividendo); 
    
    printf("\n Digite o divisor: ");
    scanf("%d", &divisor);
    
    quociente = dividendo / divisor;
    resto = dividendo % divisor;
    
    
    printf("\n Quociente = %d", quociente);
    printf("\n Modulo: %d", resto);
    
  
  
   
    return 0;
}
