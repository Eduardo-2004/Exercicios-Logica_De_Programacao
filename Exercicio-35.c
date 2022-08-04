/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int dia;
    
    printf("\n[====================== FRASES MOTIVADORAS ==========================]\n");
    printf("\n       [1] DOM [2] SEG [3] TER [4] QUA [5] QUI [6] SEX [7] SÁB \n");
    
    
    printf("\n                     Informe um dia da semana:");
    scanf("%i", &dia);

    if(dia == 1){
        
        printf("\n          Frase de Domingo: Faça sempre o seu melhor!");
        
    } else if(dia == 2){
        
        printf("\n          Frase de Segunda: Acredite que o melhor possa ser feito!");
        
    }else if(dia == 3){
        
        printf("\n          Frase de Terça: Não espere, ponha em prática!");
        
    }else if(dia == 4){
        
        printf("\n          Frase de Quarta: Mesmo que pareça difícil, não pare!");
        
    }else if(dia == 5){
        
        printf("\n          Frase de Quinta: Só trabalhando é possível trilhar o caminho!");
        
    }else if(dia == 6){
        
        printf("\n          Frase de Sexta: Tenha coragem!");
        
    }else if(dia == 7){
        
        printf("\n          Frase de Sábado: Descubra quem você realmente é…!");
        
    } else {
        
        printf("\n                       Erro: Digite um número válido!");
        
        
    } 
    

    return 0;
}
