/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int t, m, f, vet3[30][30], vet2[30], vet[30], c = 0, d = 0, i, j, teste = 0;
      
        printf("Quantos pessoas tem do sexo masculino: "); 
        scanf("%d",&m);
        printf("Quantos pessoas tem do sexo feminino: "); 
        scanf("%d",&f);
        printf("_______________________________________\n");
        printf("\n");
        
        for(i = 0; i < m; i++){
            printf("Qual a idade do %d° homem na lista a se casar:",i+1); 
            scanf("%d", &vet[i]);
        }
        
        printf("_______________________________________\n");
        printf("\n");
        
        for(i = 0; i < f; i++){
            printf("Qual a idade da %d° mulher na lista a se casar:",i+1); 
            scanf("%d", &vet2[i]);
        }
        
        
        
        for (i = 0; i < m; i++) {
            for (j = i + 1; j < m; j++) {
                    if (vet[i] == vet[j]) {
                        c = vet[i];
                    }
            }
        }
        for (i = 0; i < f; i++) {
            for (j = i + 1; j < f; j++) {
                    if (vet2[i] == vet2[j]) {
                        d = vet2[i];
                    }
            }
        }
        
        //TENTATIVA DE COMBINAÇÃO DE IDADES MAIS FREQUENTES EXERCICIO 99
        
        // t = m + f;
        // for(i = 0; i < t; i ++){
        //     for(j = 0; i < t; i++){
        //         vet3[i][j] += vet[i];
                
        //     }
        //     printf("%d",vet3[i][j]);
        // }
        
        
    printf("_______________________________________\n");
    printf("\n");
    printf("A idade mais frequente de casamento dos homens é: %d", c);
    printf("Anos \n");
    printf("A idade mais frequente de casamento das mulheres é: %d", d);
    printf("Anos");
    
        return 0;
}
