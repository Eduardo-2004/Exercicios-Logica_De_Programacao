// código-fonte:
#include <stdio.h>
#include <string.h>

int main() {
  char nome[50], a[50], b[50];
  int i, n;

  printf("Nome: ");
  scanf("%[^\n]s", &nome);

  n = strlen(nome);

  for(i=0; i<n; i++) {
    if ((nome[i] >= 'A') && (nome[i] <= 'Z')) {
       a[i] = nome[i];
      
    }
    else if ((nome[i] >= 'a') && (nome[i] <= 'z')) {
            a[i] = nome[i] - 32;
            
         }
         else {
            a[i] = nome[i];
         
         }
  }

  a[i] = '\0';
  

  printf("\n");
  printf("Letra Maiúscula: **%s**", a);

  return(0);
}