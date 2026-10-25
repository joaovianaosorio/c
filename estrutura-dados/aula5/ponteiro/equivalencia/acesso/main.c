/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vet[3] = {5, 15, 25}; 
    int *p;
    
    printf("\a\a\a\a\a\a");
    
    // 1. EQUIVALÊNCIA DE ATRIBUIÇÃO 
    p = vet; // Idêntico a: p = &vet[0];
    
    // 2. ACESSO POR PONTEIROS vs COLCHETES 
    printf("Acesso com colchetes vet[1]: %d\n", vet[1]);
    printf("Acesso com ponteiro \*(p + 1): %d\n", *(p + 1));

    return 0;
}