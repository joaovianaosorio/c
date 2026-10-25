/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int valor = 10; 
    int *ptr1 = &valor; // 'ptr1' guarda o endereço de 'valor'
    int **ptr2 = &ptr1; // 'ptr2' guarda o endereço do ponteiro 'ptr1'
    
    printf("\a\a\a\a\a");
    printf("Valor inicial: %d\n", valor); // 10
    // Alterando 'valor' através de 'ptr2' (desreferenciando duas vezes) 
    **ptr2 = 50;
    printf("Valor alterado via **ptr2: %d\n", valor); // 50

    return 0;
}
