/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Aloca 5 inteiros inicializados a zero
    int *v = (int*) calloc(5, sizeof(int));
    
    // Teste de alocação obrigatório
    if (v == NULL) {
        printf("Erro de alocação!\n");
        exit(1);
    }
    
    // Para imprimir o valor da primeira posição (v[0]), usamos %d:
    printf("v[0] = %d\n", v[0]); 
    
    // Se quiser imprimir o endereço do ponteiro, o correto é usar %p:
    // printf("Endereço de v = %p\n", (void*)v);

    // Libera a memória alocada
    free(v);
    
    return 0;
}