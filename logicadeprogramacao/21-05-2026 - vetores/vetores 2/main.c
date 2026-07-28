/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int pares[4] = {2, 4, 6, 8};
    printf("\t\tVetores - 2\n");
    printf("Primeiro elemento: %d\n", pares[0]);
    printf("Terceiro elemento: %d\n", pares[2]);
    printf("Comprimento do vetor: %d bytes\n", sizeof(pares)); //cada variável(?) 
    //dentro do vetor tem 4 bytes. no total, o vetor tem 16 bytes.
    printf("Endereço do primeiro elemento: %p\n", pares);
    printf("Endereço do primeiro elemento: %p\n", pares[0]);

    return 0;
}
