//56. Um n�mero se diz perfeito se � igual � soma de seus divisores pr�prios. Divisores
//pr�prios de um n�mero positivo N s�o todos os divisores inteiros positivos de N exceto o
//pr�prio N. Por exemplo, o n�mero 6, seus divisores pr�prios s�o 1, 2 e 3, cuja soma �
//igual � 6 (1 + 2 + 3 = 6). Outro exemplo � o n�mero 28, cujos divisores pr�prios s�o 1, 2,
//4, 7 e 14, e a soma dos seus divisores pr�prios � 28 (1 + 2 + 4 + 7 + 14 = 28).

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
                
                printf("%d é um número perfeito", n);
                
            } else{
                
                printf("%d não é um número perfeito", n);
                
                
            }
        }  
        return 0;
}
