//56. Um número se diz perfeito se é igual à soma de seus divisores próprios. Divisores
//próprios de um número positivo N são todos os divisores inteiros positivos de N exceto o
//próprio N. Por exemplo, o número 6, seus divisores próprios são 1, 2 e 3, cuja soma é
//igual à 6 (1 + 2 + 3 = 6). Outro exemplo é o número 28, cujos divisores próprios são 1, 2,
//4, 7 e 14, e a soma dos seus divisores próprios é 28 (1 + 2 + 4 + 7 + 14 = 28).

//28 = 1, 2, 7, 4, 14;

#include <stdio.h>


        int main()
        {
            int n, soma = 0, i;
            
            printf("Digite um numero maior que zero: ");
            scanf("%d", &n);
        
        if(n != 0){  
            for(i = 1; i < n; i++){
                if(n % i == 0){
                    soma += i;
                    
                }
            }
            
            if(soma == n) {
                
                printf("%d Ã© um nÃºmero perfeito", n);
                
            } else{
                
                printf("%d nÃ£o Ã© um nÃºmero perfeito", n);
                
                
            }
        }  
        return 0;
}
