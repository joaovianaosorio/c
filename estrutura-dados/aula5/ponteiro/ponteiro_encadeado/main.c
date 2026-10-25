/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int valor = 42;          // Variável comum (inteiro)
    int *ptr1 = &valor;      // 1 asterisco: ponteiro para int
    int **ptr2 = &ptr1;      // 2 asteriscos: ponteiro para ponteiro
    int ***ptr3 = &ptr2;     // 3 asteriscos: ponteiro para ponteiro de ponteiro

    printf("=== Valores acessados por cada nivel ===\n");
    printf("valor direto:   %d\n", valor);
    printf("via *ptr1:      %d\n", *ptr1);
    printf("via **ptr2:     %d\n", **ptr2);
    printf("via ***ptr3:    %d\n", ***ptr3);

    // Alterando o valor original acessando direto pelo ponteiro de 3 niveis
    ***ptr3 = 99;

    printf("\n=== Apos alterar via ***ptr3 = 99 ===\n");
    printf("Novo valor de 'valor': %d\n", valor);

    return 0;
}