/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vetor[4] = {2, 10, 6, 7};
    int *ptr;
    int *ptr2 = &vetor[3];
    
    ptr = vetor;
    
    if(ptr < ptr2){
     printf("O valor de \"ptr\" + 2 é: %d\n", *(ptr + 2));
    }
    
    printf("O valor dentro de \"ptr\" é: %d\n", *ptr);
    
    *ptr += 2;
     printf("O valor que está dentro de \"ptr\" + 2 é: %d\n", *ptr);

    return 0;
}
