
//Elabore um programa em C que leia valores inteiros para preencher uma matriz A 5 x 5.
//Você deverá criar adicionalmente dois vetores de 5 elementos: somaLinhas e
//somaColunas. Em cada posição do vetor somaLinhas deverá ser armazenada a soma da
//linha correspondente na matriz A. Da mesma forma, em cada posição do vetor
//somaColunas deverá ser armazenada a soma da coluna correspondente na matriz A.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int mat[5][5], soma, i, j, somaLinhas[5], somaColunas[5];
    
    srand(time(NULL));
    
    //matriz/main
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            
        mat[i][j] = rand() % 100;     
            
        }
        
    }
    
    //soma/linhas
    for(i = 0; i < 5; i++){
        soma = 0;
        for(j = 0; j < 5; j++){
            
         soma += mat[i][j];   
            
        }
        somaLinhas[i] = soma; 
    }

    //soma/Colunas
     for(j = 0; j < 5; j++){
        soma = 0;
        for(i = 0; i < 5; i++){   
         
         soma += mat[i][j];   
            
        }
        somaColunas[j] = soma;
    }
    
    //ImpressÃ£o
    printf("\nMatriz: \n");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            
         printf("%d ", mat[i][j]);   
            
        }
        printf("\n");
        
    }
    
    printf("\n\nVetor com a soma das linhas:\n");
    for(i = 0; i < 5; i++){
        
        printf("Linha %d: %d\n", i, somaLinhas[i]);
        
    }
    

     printf("\n\nVetor com a soma das colunas:\n");
    for(j = 0; j < 5; j++){
        
        printf("Coluna %d: %d\n", j, somaColunas[j]);
        
    }
    

    return 0;
}
