
//65. Faça um programa em C que leia um array de 20 inteiros e imprima o menor e o maior
//valor dentre os elementos do array, bem como suas respectivas posições

#include <stdio.h>

#include <stdio.h>

int main()
{
    int vet[20], i, menor = 99999, maior = 0, posicao_menor, posicao_maior;    

    for(i = 0; i < 20; i++){
        
        printf("Digite o valor da posiÃ§Ã£o %i = ", i);
        scanf("%i", &vet[i]);
        
    }
    
    for(i = 0; i < 20; i++){
        
        if(menor > vet[i]){
            
            menor = vet[i];
            posicao_maior = i;
            
          }
        if(maior < vet[i]){
            
            maior = vet[i];
            posicao_menor = i;
            
        }  
    }
    
    printf("\nMenor: %i \nMaior: %i \nPosicao menor: %i \nPosicao maior: %i", menor, maior, posicao_menor, posicao_maior);

    return 0;
}
