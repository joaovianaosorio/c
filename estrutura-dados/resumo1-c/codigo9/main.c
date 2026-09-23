/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    
    printf("\a\a\a\a\a");
    printf("\tNúmeros Pares\n\n");
    printf("Digite um número inteiro par entre 1 e 50: ");
    scanf("%d", &n);
    if (n % 2 != 0){
     printf("Você não seguiu a regra.");
     return 0;
    }
    if (n < 1 || n > 50){
     printf("Você não seguiu a regra.");
     return 0;
    }
    for(n; n < 50 ;n+=2){
     printf("%d\n", n);
    }
    return 0;
}