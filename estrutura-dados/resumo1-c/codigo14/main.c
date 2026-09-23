/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int l, c, mat[3][3], res = 0;
    printf("\a\a\a\a\a\a");
    printf("\t\t Desafio - Matrizes\n\n");
    
    for(l = 0; l < 3; l++){
     for(c = 0; c < 3; c++){
      printf("Digite um número inteiro: ");
      scanf("%d", &mat[l][c]);
      }
     }
   
   for (int i = 0; i < 3; i++){
    res += mat[i][i];
   }
   
   printf("\n");
    for(l = 0; l < 3; l ++){
     for(c = 0; c < 3; c++){
      printf("%d ", mat[l][c]);
      if(c == 2){
       printf("\n");
      }
     }
    }
    printf("\nO resultado da diagonal principal é: %d", res);
    
 return 0;
}