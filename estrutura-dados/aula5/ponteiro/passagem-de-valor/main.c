/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

// A função recebe PONTEIROS para os inteiros originais
void trocar(int *a, int *b) {
    int temp = *a; // Armazena o valor do endereço apontado por 'a'
    *a = *b;       // Copia o valor de 'b' no endereço de 'a'
    *b = temp;     // Copia o valor temporário no endereço de 'b'
}

int main() {
    int x = 10;
    int y = 20;

    printf("Antes da troca: x = %d, y = %d\n", x, y);

    // Passamos os ENDEREÇOS de x e y usando '&'
    trocar(&x, &y);

    printf("Depois da troca: x = %d, y = %d\n", x, y);

    return 0;
}