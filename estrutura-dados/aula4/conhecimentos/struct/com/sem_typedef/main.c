/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

// ========================================== 
// FORMA 1: SEM TYPEDEF 
// ==========================================

struct CarroSemTypedef{ 
 char modelo[8]; 
 int ano; 
};

// ========================================== 
// FORMA 2: COM TYPEDEF (Convenção: Nome em MAIÚSCULAS) 
// ==========================================

typedef struct { 
 char modelo[8]; 
 int ano; 
} CARRO;

int main()
{
    printf("\a\a\a\a\a\a");
    
    // Declaração SEM typedef (Exige a palavra 'struct')
    struct CarroSemTypedef c1; 
    strcpy(c1.modelo, "Fusca"); 
    c1.ano = 1978;
    
    // Declaração COM typedef (Direta e limpa)
    CARRO c2; 
    strcpy(c2.modelo, "Civic"); 
    c2.ano = 2022;
    
    printf("Carro 1: %s (%d)\n", c1.modelo, c1.ano); 
    printf("Carro 2: %s (%d)\n", c2.modelo, c2.ano);

    return 0;
}