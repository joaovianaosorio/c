/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *v; 
    
    // Aloca memória para 5 inteiros
    v = (int*) malloc(5 * sizeof(int));
    
    if (v == NULL){ 
        printf("Erro: Memória insuficiente!\n"); 
        exit(1); 
    }
    
    // CORREÇÃO: Atribuindo valores aos elementos do vetor
    v[0] = 10; // ou *v = 10;
    v[1] = 20;
    
    // Exibindo para testar
    printf("v[0] = %d, v[1] = %d\n", v[0], v[1]);
    
    free(v); // Libera a memória corretamente

    return 0;
}