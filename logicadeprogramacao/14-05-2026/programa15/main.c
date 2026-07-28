/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, k = 0;
    printf("Programa 15 - Sequência de Números Pares\n");
    for(n = 2; n < 31; n += 2){
        printf("%d\n", n);
        k = k + n;
    }
    
    printf("%d", k);
    return 0;
}
