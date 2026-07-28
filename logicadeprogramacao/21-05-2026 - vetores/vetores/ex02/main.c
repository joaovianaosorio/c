/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num[10], k, n = 0;
    printf("\t\tVetores - Exercício 2\n");
    for (k = 0; k < sizeof(num) / 4; k++){
        n += 2;
        num[k] = n;
    }
    for (k = 0; k < sizeof(num) / 4; k++)
    printf("%d ", num[k]);
    
    return 0;
}

