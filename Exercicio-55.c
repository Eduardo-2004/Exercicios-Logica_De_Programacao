/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
      int n1, n2, i, c, j = 0, l = 0, b;
            
           printf("DIGITE O PRIMEIRO NUMERO: "); 
           scanf("%d",&n1);
           printf("DIGITE O SEGUNDO NUMERO: "); 
           scanf("%d",&n2);
           printf("\n");
           printf("\n");
            for(i = 1; i < n1; i++){
                c = n1 % i;
                if(c == 0){
                    j += i;
                    printf("+ %i ",i);
               
                     
                    
                    
                }
                
            }
            printf("= %d \n",j);
            printf("\n");
            
            for(i = 1; i < n2; i++){
                b = n2 % i;
                if(b == 0){
                    l += i;
                    printf("+ %i ",i);
               
                     
                    
                    
                }
                
            }
            
            printf("= %d \n",l);
            printf("\n");
            
            if(j == n2 && l == n1){
                 printf("ESSES 2 NUMEROS SÂO AMIGOS \n\n");
            }else{
                 printf("ESSES 2 NUMEROS NÃO SÂO AMIGOS \n\n");
            }
            
            printf("=> %d \n",j);
            printf("=> %d",l);
    
        return 0;
}
