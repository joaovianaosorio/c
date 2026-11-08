/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int linhas = 3, colunas = 4;
    int **matriz;
    
    // 1. Aloca o vetor de ponteiros para as linhas
    matriz = (int**) malloc(linhas * sizeof(int*));
    if (matriz == NULL) {
        printf("Erro de alocação!\n");
        exit(1);
    }
    
    // 2. Aloca cada linha individualmente
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int*) malloc(colunas * sizeof(int));
        if (matriz[i] == NULL) {
            printf("Erro de alocação na linha %d!\n", i);
            exit(1);
        }
    }
    
    // Uso normal como matriz bidimensional (exemplo)
    matriz[0][0] = 50; 
    
    // 3. Liberação de memória (em ordem inversa)
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]); // Libera cada linha individualmente
    }
    free(matriz); // Libera o vetor de ponteiros principal
    
    return 0;
}