/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x = 10;
    float y = 5.5;
    
    void *ptr; // Ponteiro genérico
    
    ptr = &x; // Válido! Aponta para o inteiro
    printf("%d\n", *(int*)ptr);
    ptr = &y; // Válido! Agora aponta para o float
    printf("%.1f\n", *(float*)ptr);
    
    // * do lado de fora -> "Agora pegue o valor contido nesse endereço".
}
