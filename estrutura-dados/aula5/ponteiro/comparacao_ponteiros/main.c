/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numeros[3] = {10, 20, 30}; 
    int *p1 = &numeros[0]; // Aponta para o elemento 10 (ex: endereço 1000) 
    int *p2 = &numeros[2]; // Aponta para o elemento 30 (ex: endereço 1008)
    
    printf("\a\a\a\a\a");
    
    // Aritmética: p1 + 2 pula 2 inteiros (8 bytes à frente)
    printf("Valor em (p1 + 2): %d\n", *(p1 + 2)); // Imprime 30
    
    // Comparação de ponteiros 
    if (p2 > p1){ 
     printf("p2 esta em uma posicao de memoria posterior a p1.\n"); 
    }

    return 0;
}