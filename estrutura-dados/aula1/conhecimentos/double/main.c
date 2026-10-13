/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() { 
    float preco = 19.99f; // Usado para valores cotidianos com poucas casas decimais
    double pi = 3.141592653589793; // Usado para cálculos de alta precisão 
    printf("Preço (float com 2 casas): R$ %.2f\n", preco); 
    printf("Valor de Pi (double com alta precisão): %.15lf", pi); 
    
    return 0;
}