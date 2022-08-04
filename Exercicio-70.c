
//Escreva um programa que carregue um array com tamanho variável. O tamanho máximo do array é de 100 posições (carga de array com sentinela).

#include <stdio.h>

int main()
{
    int contador, esc;
    
    printf("Deseja continuar: [1]:Sim [2]:Não \n=>");
    scanf("%i", &esc);
    
    if(esc == 1){
    printf("Digite um valor: ");
    scanf("%i", &contador);
    
    while(contador < 100){
        
        contador++;
        printf("%i ",contador);
    
     }     
   } else if(esc == 2){
       
       printf("Até mais!");
       
   } else{
       
       printf("Inválido!");
       
   }
    
    
    return 0;    
    
} 