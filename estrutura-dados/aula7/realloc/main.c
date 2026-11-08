/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Começa com 5 posições
    int *v = (int*) malloc(5 * sizeof(int));
    
    if (v == NULL) {
        printf("Erro na alocação inicial!\n");
        exit(1);
    }
    
    // Necessidade mudou: expandir para 10 posições
    int *v_aux = (int*) realloc(v, 10 * sizeof(int));
    
    if (v_aux != NULL) {
        // Se a realocação deu certo, atualiza o ponteiro principal
        v = v_aux; 
    } else {
        // Se falhou, o 'v' original ainda é válido e precisa ser libertado
        printf("Erro ao realocar!\n");
        free(v);
        exit(1);
    }
    
    // Faz qualquer operação necessária com o vetor 'v'...

    // Liberta a memória no fim do programa
    free(v);
    
    return 0;
}